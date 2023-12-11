#include <iostream>
#include <Vector.h>
#include "SDL.h"
#include "Map.h"
#include "ResourceManager.h"
#include "WindowManager.h"

int main(int p, char* par[])
{
   bool bClose=false;

   WindowManager::GetPtr()->InitWindow(640, 480);
   ResourceManager::GetPtr()->Load("assets/resources.txt");

   Map map1(60,60);
   Sprite* image = dynamic_cast<Sprite*>(ResourceManager::GetPtr()->GetResource("tank1"));
   Sprite* back = dynamic_cast<Sprite*>(ResourceManager::GetPtr()->GetResource("background"));
   while(!bClose)
   {
       WindowManager::GetPtr()->Input();
       WindowManager::GetPtr()->ClearScreen();
       WindowManager::GetPtr()->Draw(back, Vector3(0, 0, 0));
       map1.Draw();
       WindowManager::GetPtr()->Draw(image, Vector3(0, 0, 0));
       WindowManager::GetPtr()->UpdateScreen();
   }
   return 0;
}


