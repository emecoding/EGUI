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

    int get_refresh_rate();

    void main_loop(SDL_Event event);

    void clean_up();

private:
    void create_window();
    void create_renderer();
    void display();
    void clear();
    void perform_delay();

    SDL_Window *window;
    SDL_Renderer *renderer;

    bool running = true;
    bool can_poll_events();

    int calculate_time();

    inline float hire_time_in_seconds();
    const float time_step = 0.01;
    float accumulator = 0.0f;
    float current_time = hire_time_in_seconds();
};