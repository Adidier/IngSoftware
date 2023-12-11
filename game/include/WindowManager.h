#pragma once
#include <string>
#include <map>
#include "Object.h"
#include "SDL.h"
#include "Sprite.h"
#include "Vector.h"

class WindowManager
{
public:	
	static WindowManager* GetPtr();
    void Input();
    void InitWindow(int wScreen, int hScreen);
    void Draw(Sprite* img, Vector3 pos);
    void UpdateScreen();
    void ClearScreen();
    SDL_Renderer* GetRender();
private:
	WindowManager();
    SDL_Window* gWindow;
    SDL_Surface* gScreenSurface;
    SDL_Renderer* renderer;
};