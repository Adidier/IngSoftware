#pragma once
#include <string>
#include <map>
#include "Map.h"
#include "WindowManager.h"

class GameLoopManager
{
public:	
	static GameLoopManager* GetPtr();
	void Loop();
private:
	static GameLoopManager* ptr;
	GameLoopManager();
	Map map1;
	Sprite* image;
	Sprite* back;
	WindowManager* window;
	bool bClose;
};