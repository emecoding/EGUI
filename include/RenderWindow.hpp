#pragma once
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>

#include "EGUI_Component.hpp"

class RenderWindow : public EGUI_Component
{
public:
    RenderWindow(float x, float y, float width, float height, const char *title);
    RenderWindow(float width, float height, const char *title);

    void clean_up();

private:
    void create_window();
    void create_renderer();

    SDL_Window *window;
    SDL_Renderer *renderer;

    void display();
    void clear();
};