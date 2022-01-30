#include <iostream>
#include "all.hpp"

int main(int, char **)
{
    if (all::init() != 0)
        return -1;

    SDL_Event event;

    RenderWindow window(800, 600, "Window test");
    window.main_loop(event);

    return all::quit(window);
}
