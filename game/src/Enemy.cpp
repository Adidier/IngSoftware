#include <iostream>
#include"Enemy.h"
#include <WindowManager.h>
#include "ResourceManager.h"

Enemy::Enemy(EnemyType tanlNum, int _posX, int _posY, std::string pathImage)
{
	img = dynamic_cast<Sprite*>(ResourceManager::GetPtr()->GetResource(pathImage));

}

 void Enemy::Input()
{

}

void Enemy::Update(std::vector<Enemy*> enemies)
{

}

void Enemy::Draw()
{
	WindowManager::GetPtr()->Draw(img, Vector3(0, 0, 0));
}