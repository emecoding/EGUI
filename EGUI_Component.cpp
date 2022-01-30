#include "EGUI_Component.hpp"

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