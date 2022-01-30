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
}