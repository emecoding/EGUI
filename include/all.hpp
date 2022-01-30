#pragma once

//EVERYTHING THAT USER CAN YOU, INCLUDE HERE!
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

#include "RenderWindow.hpp"
#include "Button.hpp"

namespace all
{
    int init()
    {
        if (SDL_Init(SDL_INIT_VIDEO) > 0)
        {
            std::cout << "SDL2 failed to init... Error: " << SDL_GetError() << std::endl;
            return -1;
        }
        if (!(IMG_Init(IMG_INIT_PNG)))
        {
            std::cout << "IMG_Init failed... Error: " << SDL_GetError() << std::endl;
            return -1;
        }

        return 0;
    }

    int quit(RenderWindow window)
    {
        window.clean_up();
        SDL_Quit();
        return 0;
    }
}
