#include <iostream>
#include "../include/all.hpp"

int main(int, char **)
{
    if (all::init() != 0)
        return -1;

    SDL_Event event;

    RenderWindow window(800, 600, "Window test");
    Button b(100, 100, 100, 16, "Test Button");
    b.set_texture(window.load_texture("../res/Textures/Button.png"));
    //b.set_icon(window.load_texture("../res/Icons/Add.png"));

    int running = 0;

    while (running == 0)
    {
        window.blit(&b);
        running = window.main_loop(event);

        if (b.is_right_clicked)
            std::cout << "RIGHT CLICK" << std::endl;
        if (b.is_left_clicked)
            std::cout << "LEFT CLICK" << std::endl;
    }

    return all::quit(window);
}
