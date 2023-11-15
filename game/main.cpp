#include <iostream>
#include <Vector.h>
#include "SDL.h"

SDL_Window* gWindow;
SDL_Surface* gScreenSurface;

SDL_Surface* gHelloWorld = NULL;

void input()
{
    SDL_Event event;
    while (SDL_PollEvent(&event)) {
        /* We are only worried about SDL_KEYDOWN and SDL_KEYUP events */
        switch (event.type) {
        case SDL_KEYDOWN:
            printf("Key press detected\n");
            break;

        case SDL_KEYUP:
            printf("Key release detected\n");
            break;

        default:
            break;
        }
    }
}

void initWindow(int wScreen,int hScreen)
{

    //Initialize SDL
    if (SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
    }
    else
    {
        //Create window
        gWindow = SDL_CreateWindow("SDL Tutorial", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, wScreen, hScreen, SDL_WINDOW_SHOWN);
        if (gWindow == NULL)
        {
            printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
        }
        else
        {
            //Get window surface
            gScreenSurface = SDL_GetWindowSurface(gWindow);
        }
    }
}

void draw()
{
    SDL_BlitSurface(gHelloWorld, NULL, gScreenSurface, NULL);
    SDL_UpdateWindowSurface(gWindow);
}

int main(int p, char* par[])
{
   bool bClose=false;
   initWindow(640,480);
   gHelloWorld = SDL_LoadBMP("assets/hello.bmp");
   while(!bClose)
   {
       input();
       //update
       draw();
   }
   return 0;
}