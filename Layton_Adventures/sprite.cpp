#include "sprite.h"

Sprite::Sprite()
{
    x = 32;
    y = 96;
    
    xVel = 0;
    yVel = 0;
    
    w = 32;
    h = 96;
    
    Layton = SDL_LoadBMP("BoyKnight_Moosader.bmp");
    
    buffer = SDL_SetVideoMode(640, 480, 32, SDL_SWSURFACE);
    
    SDL_WM_SetCaption("Layton Adventures", NULL);
    
    color = SDL_MapRGB(buffer->format, 0xff,0xff,0xff);
    
}

Sprite::~Sprite()
{
    SDL_FreeSurface(Layton);
    
    SDL_Quit();
}

void Sprite::show()
{
    SDL_Rect *clip = NULL;
    
    SDL_Rect offsets;
    offsets.x = x;
    offsets.y = y;
    
    SDL_BlitSurface(Layton, clip, buffer, &offsets); 
}

void Sprite::get_input()
{
    //If a key was pressed
    if( event.type == SDL_KEYDOWN )
    {
        //Adjust the velocity
        switch( event.key.keysym.sym )
        {
            case SDLK_UP: yVel -= h / 2; break;
            case SDLK_DOWN: yVel += h / 2; break;
            case SDLK_LEFT: xVel -= w / 2; break;
            case SDLK_RIGHT: xVel += w / 2; break;    
        }
    }
}

void Sprite::update()
{    
    //Update the screen
    SDL_Flip(buffer);

}