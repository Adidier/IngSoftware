#pragma once
#include "Sprite.h"
enum BoxType
{
	NONE,////
	IRON,
	STONE,
	BRICK,
	GRASS,
	WATHER,
	MAX
};

class BoxData 
{
public:
	BoxData();
	BoxData(BoxType boxType);
	float getSpeedReduction();
	bool isWalkable();
	bool isDestroyable();
	float getMaxHealth();
	BoxType getType();
	Sprite* getSprite() { return m_sprite; }
private:
	void setProperties();
	

	Sprite* m_sprite;///////
	BoxType m_type;
	bool m_isWalkable;
	bool m_isDestroyable;
	float m_maxHealth;
	float m_speedReduction;
};