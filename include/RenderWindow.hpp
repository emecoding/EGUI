#pragma once
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>
#include <vector>

#include "EGUI_Component.hpp"

class RenderWindow : public EGUI_Component
{
public:
    RenderWindow(float x, float y, float width, float height, const char *title);
    RenderWindow(float width, float height, const char *title);

    int get_refresh_rate();
    int main_loop(SDL_Event event);
    int get_amount_of_blits() { return components_to_blit.size(); }

    void clean_up();
    void blit(EGUI_Component *component);

    SDL_Texture *load_texture(const char *file_path);

private:
    void create_window();
    void create_renderer();
    void update_EGUI_Components(SDL_Event event);
    void display();
    void clear();
    void perform_delay();

    SDL_Window *window;
    SDL_Renderer *renderer;

    bool running = true;
    bool can_poll_events();

    int calculate_time();
    int mouse_x, mouse_y;

    inline float hire_time_in_seconds();
    const float time_step = 0.01;
    float accumulator = 0.0f;
    float current_time = hire_time_in_seconds();

    std::vector<EGUI_Component *> components_to_blit = {};
};