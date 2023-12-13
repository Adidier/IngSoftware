#include <iostream>
#include <Vector.h>
#include "SDL.h"
#include "Map.h"
#include "ResourceManager.h"
#include "WindowManager.h"
#include "GameLoopManager.h"

int main(int p, char* par[])
{
   bool bClose=false;

   WindowManager::GetPtr()->InitWindow(640, 480);
   ResourceManager::GetPtr()->Load("assets/resources.txt");

   Map map1(60,60);
   Sprite* image = dynamic_cast<Sprite*>(ResourceManager::GetPtr()->GetResource("tank1"));
   Sprite* back = dynamic_cast<Sprite*>(ResourceManager::GetPtr()->GetResource("background"));

   GameLoopManager::GetPtr()->Loop(bClose, map1, image, back);
   
   return 0;
}


