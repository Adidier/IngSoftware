#pragma once
#include <string>
#include <map>
#include "Map.h"

class GameLoopManager
{
public:	
	static GameLoopManager* GetPtr();
	void Loop(bool bClose, Map map, Sprite* image, Sprite* back);
private:
	static GameLoopManager* ptr;
	GameLoopManager();
};