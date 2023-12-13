#include <iostream>
#include <Vector.h>
#include "SDL.h"
#include "Map.h"
#include "WindowManager.h"
#include "GameLoopManager.h"
#include "ResourceManager.h"

GameLoopManager* GameLoopManager::ptr = nullptr;

GameLoopManager* GameLoopManager::GetPtr()
{
    if (!ptr)
    {
        ptr = new GameLoopManager();
    }
    return ptr;
}

GameLoopManager::GameLoopManager():map1(11, 8),bClose(false)
{
    window = WindowManager::GetPtr();
    image = dynamic_cast<Sprite*>(ResourceManager::GetPtr()->GetResource("tank1"));
    back = dynamic_cast<Sprite*>(ResourceManager::GetPtr()->GetResource("background"));
}

void GameLoopManager::Loop()
{
    while (!bClose)
    {
        window->Input();
        window->ClearScreen();
        window->Draw(back, Vector3(0, 0, 0));
        map1.Draw();
        window->Draw(image, Vector3(0, 0, 0));
        window->UpdateScreen();
    }
}