#pragma once
#include "WindowManager.h"

WindowManager* WindowManager::GetPtr()
{
	static WindowManager *ptr = new WindowManager();
	return ptr;
}

WindowManager::WindowManager()
{

}

void WindowManager::Input()
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

void WindowManager::InitWindow(int wScreen, int hScreen)
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
            printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
        }
    }
}

void WindowManager::Draw()
{
   // SDL_BlitSurface(gHelloWorld, NULL, gScreenSurface, NULL);
    SDL_UpdateWindowSurface(gWindow);
}