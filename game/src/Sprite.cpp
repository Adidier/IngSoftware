#pragma once
#include "Sprite.h"
#include "SDL_image.h"
#include "WindowManager.h"

Sprite::~Sprite()
{
	SDL_DestroyTexture(tex);
}

Sprite::Sprite(std::string path)
{
	SDL_Surface* img = IMG_Load(path.c_str());
	std::cout << " Reason: " << SDL_GetError() << std::endl;
	tex = SDL_CreateTextureFromSurface(WindowManager::GetPtr()->GetRender(), img);
	SDL_FreeSurface(img);
	SDL_QueryTexture(tex, NULL, NULL, &width, &height);
}

SDL_Texture* Sprite::GetTexture()
{
	return tex;
}

int Sprite::GetWidth()
{
	return width;
}

int Sprite::GetHeight()
{
	return height;
}