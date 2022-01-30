#pragma once
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>

class EGUI_Component
{
public:
    EGUI_Component(float x, float y, float width, float height);
    EGUI_Component(float x, float y, float width, float height, const char *content);

    void render(SDL_Renderer *renderer);

    void set_texture(SDL_Texture *tex);

protected:
    void update_rects();

    SDL_Rect src;
    SDL_Rect dst;

    SDL_Texture *texture = NULL;

    float X, Y, Width, Height;

    const char *Content;
};