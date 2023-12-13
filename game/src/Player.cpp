#include <iostream>
#include"Player.h"
#include <WindowManager.h>
#include "ResourceManager.h"

 Player::Player(TankPlayer tanlNum, int _posX, int _posY, std::string pathImage)
{
	 img = dynamic_cast<Sprite*>(ResourceManager::GetPtr()->GetResource(pathImage));
	 posX = _posX;
	 posX = _posY;
	 energy = 100;
}

 void Player::Input()
{

}

void Player::Update(std::vector<Enemy*> enemies)
{

}

void Player::Draw()
{
	WindowManager::GetPtr()->Draw(img, Vector3(0, 0, 0));
}