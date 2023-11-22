#pragma once
#include <string>
#include <map>
#include "Object.h"
#include "SDL.h"

class WindowManager
{
public:	
	static WindowManager* GetPtr();
    void Input();
    void InitWindow(int wScreen, int hScreen);
    void Draw();

private:
	WindowManager();
    SDL_Window* gWindow;
    SDL_Surface* gScreenSurface;
};