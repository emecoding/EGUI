#pragma once
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>

class EGUI_Component
{
public:
    EGUI_Component(float x, float y, float width, float height);
    EGUI_Component(float x, float y, float width, float height, const char *content);

protected:
    float X, Y, Width, Height;
    const char *Content;
};