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
        return;
    }
    else
    {
        SDL_SetHint(SDL_HINT_RENDER_DRIVER, "opengl");
        gWindow = SDL_CreateWindow("Star Ship", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, wScreen, hScreen, SDL_WINDOW_SHOWN);
    }
    if (gWindow != nullptr)
    {
        renderer = SDL_CreateRenderer(gWindow, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_TARGETTEXTURE);
    }
}

void WindowManager::Draw(Sprite* img, Vector3 pos)
{
    if (img == nullptr) {
        return;
    }

    SDL_Rect rect;
    rect.x = pos.getX();
    rect.y = pos.getY();
    rect.w = img->GetWidth();
    rect.h = img->GetWidth();
    SDL_RenderCopy(renderer, img->GetTexture(), NULL, &rect);
}

void WindowManager::UpdateScreen()
{
    SDL_RenderPresent(renderer);
}

void WindowManager::ClearScreen()
{
    SDL_SetRenderDrawColor(renderer, 0x00, 0x00, 0x0, 0xFF);
    SDL_RenderClear(renderer);
}

SDL_Renderer* WindowManager::GetRender()
{
    return renderer;
}