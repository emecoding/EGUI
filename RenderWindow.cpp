#include "RenderWindow.hpp"

RenderWindow::RenderWindow(float x, float y, float width, float height, const char *title) : EGUI_Component(x, y, width, height, title)
{
    create_window();
    create_renderer();
}

RenderWindow::RenderWindow(float width, float height, const char *title) : EGUI_Component(SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, width, height, title)
{
    create_window();
    create_renderer();
}

int RenderWindow::get_refresh_rate()
{
    int display_index = SDL_GetWindowDisplayIndex(window);

    SDL_DisplayMode mode;
    SDL_GetDisplayMode(display_index, 0, &mode);

    return mode.refresh_rate;
}

void RenderWindow::create_window()
{
    window = NULL;
    window = SDL_CreateWindow(Content, X, Y, Width, Height, SDL_WINDOW_SHOWN);
    if (window == NULL)
        std::cout << "Window failed to create... Error: " << SDL_GetError() << std::endl;
}

void RenderWindow::create_renderer()
{
    renderer = NULL;
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (renderer == NULL)
        std::cout << "Renderer failed to create... Error: " << SDL_GetError() << std::endl;
}

void RenderWindow::main_loop(SDL_Event event)
{
    while (running)
    {
        while (can_poll_events())
        {
            while (SDL_PollEvent(&event))
            {
                if (event.type == SDL_QUIT)
                    running = false;
            }

            accumulator -= time_step;
        }

        clear();
        display();

        perform_delay();
    }
}

void RenderWindow::display()
{
    SDL_RenderPresent(renderer);
}

void RenderWindow::clear()
{
    SDL_RenderClear(renderer);
}

void RenderWindow::clean_up()
{
    SDL_DestroyWindow(window);
}

inline float RenderWindow::hire_time_in_seconds()
{
    float t = SDL_GetTicks();
    t *= 0.001;

    return t;
}

int RenderWindow::calculate_time()
{
    int start_ticks = SDL_GetTicks();

    float new_time = hire_time_in_seconds();
    float frame_time = new_time - current_time;
    current_time = new_time;
    accumulator += frame_time;

    return start_ticks;
}

bool RenderWindow::can_poll_events()
{
    return accumulator >= time_step;
}

void RenderWindow::perform_delay()
{
    const float alpha = accumulator / time_step;
    int frame_ticks = SDL_GetTicks() - calculate_time();

    if (frame_ticks < 1000 / get_refresh_rate())
        SDL_Delay(1000 / get_refresh_rate() - frame_ticks);
}