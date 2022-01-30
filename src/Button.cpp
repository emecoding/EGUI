#include "../include/Button.hpp"

Button::Button(float x, float y, float width, float height, const char *content) : EGUI_Component(x, y, width, height, content)
{
    update_rects();
}

void EGUI_Component::render(SDL_Renderer *renderer)
{
    if (texture != NULL)
    {
        SDL_RenderCopy(renderer, texture, &src, &dst);
    }
}