#include <SDL/SDL.h>
#include "SDLMain.h"
#include "sprite.h"

int main( int argc, char *args[] )
{
    Sprite sprite;
    
    bool quit = false;
    
    while(quit == false)
    {
        while (SDL_PollEvent( &sprite.event ))
               {
                   sprite.get_input();
                   
                   if( sprite.event.type == SDL_QUIT )
                   {
                       //Quit the program
                       quit = true;
                   }
               }
               
               sprite.show();
               
               sprite.update();
               
    }
    
    return 0;
}