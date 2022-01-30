#include <iostream>
#include "../include/all.hpp"

int main(int, char **)
{
    if (all::init() != 0)
        return -1;

    SDL_Event event;

    RenderWindow window(800, 600, "Window test");
    Button b(100, 100, 100, 100, "Test Button");
    b.set_texture(window.load_texture("../res/Icons/Add.png"));

    int running = 0;

    while (running == 0)
    {
        window.blit(&b);
        running = window.main_loop(event);
    }

    return all::quit(window);
}
