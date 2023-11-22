#pragma once

#include <string>
#include "SDL.h"
#include "Object.h"

class Sprite : public Object
{
private:
	int width;
	int height;
	SDL_Texture* tex;
public:
	Sprite(std::string path);
	SDL_Texture* GetTexture();
	~Sprite();
	int GetWidth();
	int GetHeight();
};