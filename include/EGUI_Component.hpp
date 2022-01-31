#pragma once
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include <iostream>

class EGUI_Component
{
public:
    EGUI_Component(float x, float y, float width, float height);
    EGUI_Component(float x, float y, float width, float height, const char *content);

    void update(SDL_Renderer *renderer, SDL_Event event, int mouse_x, int mouse_y);

    void set_texture(SDL_Texture *tex);
    void set_icon(SDL_Texture *icon);
    void set_id(const char *ID);
    void set_text_color(SDL_Color color);
    void set_text_font(const char *file_path, int size);

    void destroy();

    bool is_right_clicked = false;
    bool is_left_clicked = false;

protected:
    void update_rects();

    SDL_Rect src;
    SDL_Rect dst;
    SDL_Rect text_src;
    SDL_Rect text_dst;

    SDL_Texture *texture = NULL;
    SDL_Texture *icon = NULL;

    float X, Y, Width, Height;

    int get_size_of_content();

    const char *Content;
    const char *Id;

    bool collides_with_mouse(int mouse_x, int mouse_y);

    SDL_Color text_color;
    SDL_Surface *text_surface = NULL;
    SDL_Texture *text_texture = NULL;
    TTF_Font *font = NULL;

    void set_surface(SDL_Renderer *renderer);
};