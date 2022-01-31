#include "../include/Button.hpp"

Button::Button(float x, float y, float width, float height, const char *content) : EGUI_Component(x, y, width, height, content)
{
    update_rects();
    this->set_text_color({
        255,
        255,
    });
    this->set_text_font("../res/Fonts/SupermercadoOne-Regular.ttf", 10 * get_size_of_content());
}

void EGUI_Component::destroy()
{
    SDL_FreeSurface(text_surface);
    SDL_DestroyTexture(text_texture);
}

void EGUI_Component::update(SDL_Renderer *renderer, SDL_Event event, int mouse_x, int mouse_y)
{
    if (text_surface == NULL || text_texture == NULL)
    {
        set_surface(renderer);
    }

    if (texture != NULL)
    {
        SDL_RenderCopy(renderer, texture, &src, &dst);
    }
    if (text_texture != NULL && text_surface != NULL)
        SDL_RenderCopy(renderer, text_texture, &text_src, &text_dst);

    if (icon != NULL)
    {
        SDL_Rect icon_src = src;
        SDL_Rect icon_dst = dst;

        icon_src.w = 10;
        icon_src.h = 10;

        std::cout << icon_src.w << std::endl;

        icon_dst.x = (dst.x + dst.w);

        SDL_RenderCopy(renderer, icon, &icon_src, &icon_dst);
    }

    if (collides_with_mouse(mouse_x, mouse_y))
    {
        if (event.type == SDL_MOUSEBUTTONDOWN)
        {
            if (event.button.button == SDL_BUTTON_LEFT)
                is_left_clicked = true;
            if (event.button.button == SDL_BUTTON_RIGHT)
                is_right_clicked = true;
        }
        if (event.type == SDL_MOUSEBUTTONUP)
        {
            if (event.button.button == SDL_BUTTON_LEFT)
                is_left_clicked = false;
            if (event.button.button == SDL_BUTTON_RIGHT)
                is_right_clicked = false;
        }
    }
}