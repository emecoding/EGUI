#include "../include/EGUI_Component.hpp"

EGUI_Component::EGUI_Component(float x, float y, float width, float height)
{
    X = x;
    Y = y;
    Width = width;
    Height = height;
}

EGUI_Component::EGUI_Component(float x, float y, float width, float height, const char *content)
{
    X = x;
    Y = y;
    Width = width;
    Height = height;
    Content = content;
}

bool EGUI_Component::collides_with_mouse(int mouse_x, int mouse_y)
{
    if ((mouse_x >= dst.x && mouse_x <= dst.x + dst.w) && (mouse_y >= dst.y && mouse_y <= dst.y + dst.h))
        return true;

    return false;
}

void EGUI_Component::set_id(const char *id)
{
    this->Id = id;
}

void EGUI_Component::set_icon(SDL_Texture *icon)
{
    this->icon = icon;
}

void EGUI_Component::set_texture(SDL_Texture *tex)
{
    texture = tex;
}

void EGUI_Component::update_rects()
{
    src.x = 0;
    src.y = 0;
    src.w = Width;
    src.h = Height;

    dst.x = X;
    dst.y = Y;
    dst.w = Width;
    dst.h = Height;

    text_dst.x = 0;
    text_dst.y = 0;
    text_dst.w = 24 + (20 * get_size_of_content());
    text_dst.h = 24;

    text_dst.x = X;
    text_dst.y = Y;
}
void EGUI_Component::set_text_color(SDL_Color color)
{
    this->text_color = color;
}
void EGUI_Component::set_text_font(const char *file_path, int size)
{
    text_src.w = size;
    text_src.h = size;

    if (this->font != NULL)
    {
        TTF_CloseFont(this->font);
        this->font = NULL;
    }

    TTF_Font *f = NULL;
    f = TTF_OpenFont(file_path, size);

    if (f == NULL)
        std::cout << "Failed to load font... Error: " << SDL_GetError() << std::endl;

    this->font = f;

    this->set_surface(NULL);
}

void EGUI_Component::set_surface(SDL_Renderer *renderer)
{
    if (this->font != NULL)
    {
        text_surface = NULL;
        text_surface = TTF_RenderText_Solid(this->font, this->Content, this->text_color);
    }

    if (renderer != NULL)
    {
        text_texture = NULL;
        text_texture = SDL_CreateTextureFromSurface(renderer, text_surface);
    }
}

int EGUI_Component::get_size_of_content()
{
    size_t Size = strlen(this->Content);
    return Size;
}