#ifndef SPRITE_H
#define SPRITE_H

#include <SDL/SDL.h>
#include "SDLMain.h"

class Sprite
{
private:
    int x, y;
    
    int xVel, yVel;
    
    int w, h;
    
    SDL_Surface *Layton;
    
    SDL_Surface *buffer;
    
    Uint32 color;
    
public:
    SDL_Event event;
    
    Sprite();
    
    ~Sprite();
    
    void show();
    
    void get_input();
    
    void update();
    
    
};

#endif

