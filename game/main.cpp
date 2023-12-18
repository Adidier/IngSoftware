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

   GameLoopManager::GetPtr()->Loop();
   
   /*
   Tank tank;
    tank.printPosition();

    MoveCommand moveUpCommand(tank, &Tank::moveUp);
    MoveCommand moveRightCommand(tank, &Tank::moveRight);

    moveUpCommand.execute();
    tank.printPosition();

    moveRightCommand.execute();
    tank.printPosition();*/

   return 0;
}


