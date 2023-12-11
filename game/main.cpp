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
   Sprite* image =dynamic_cast<Sprite*>( ResourceManager::GetPtr()->GetResource("tank1"));
   while(!bClose)
   {
       WindowManager::GetPtr()->Input();
       WindowManager::GetPtr()->Draw(image,Vector3(0,0,0));
   }
   return 0;
}


