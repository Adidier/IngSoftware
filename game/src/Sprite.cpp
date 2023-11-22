#pragma once
#include "Sprite.h"
#include "SDL_image.h"

Sprite::~Sprite()
{
	SDL_DestroyTexture(tex);
}

Sprite::Sprite(std::string path)
{
	SDL_Surface* img = IMG_Load(path.c_str());
	tex = SDL_CreateTextureFromSurface(nullptr /*TODO*/, img);
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