#include <iostream>
#include <Vector.h>
#include "SDL.h"
#include "Map.h"
#include "ResourceManager.h"
#include "WindowManager.h"

int main(int p, char* par[])
{
   bool bClose=false;
   ResourceManager::GetPtr()->Load("assets/resources.txt");
   WindowManager::GetPtr()->InitWindow(640,480);
   Map map1(60,60);
   
   while(!bClose)
   {
       WindowManager::GetPtr()->Input();
       //update
       WindowManager::GetPtr()->Draw();
   }
   return 0;
}