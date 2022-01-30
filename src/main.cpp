#include <iostream>
#include "../include/all.hpp"

int main(int, char **)
{
    if (all::init() != 0)
        return -1;

    RenderWindow window(800, 600, "Window test");
    return all::quit(window);
}
