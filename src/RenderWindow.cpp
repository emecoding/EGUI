#include "../include/RenderWindow.hpp"

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

void RenderWindow::clean_up()
{
    SDL_DestroyWindow(window);
}