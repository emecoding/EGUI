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
}