#include <iostream>
#include <Vector.h>
#include "SDL.h"
#include "Map.h"
#include "ResourceManager.h"
#include "WindowManager.h"
#include "GameLoopManager.h"

GameLoopManager *GameLoopManager::ptr = nullptr;

GameLoopManager *GameLoopManager::GetPtr()
{
    if (!ptr)
    {
        ptr = new GameLoopManager();
    }
    return ptr;
}

void GameLoopManager::Loop(bool bClose, Map map, Sprite* image, Sprite* back)
{
    while (!bClose)
    {
        WindowManager::GetPtr()->Input();
        WindowManager::GetPtr()->ClearScreen();
        WindowManager::GetPtr()->Draw(back, Vector3(0, 0, 0));
        map.Draw();
        WindowManager::GetPtr()->Draw(image, Vector3(0, 0, 0));
        WindowManager::GetPtr()->UpdateScreen();
    }
}