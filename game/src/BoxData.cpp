#include "BoxData.h"

BoxData::BoxData()
{
	m_type = BRICK;
	setProperties();
}

BoxData::BoxData(BoxType boxType)
{
	m_type = boxType;
	setProperties();
}

void BoxData::setProperties()
{
	//m_texture = TextureManager.getTexture(BoxType type);
	switch (m_type)
	{
	case IRON:		 
		m_isWalkable = false;
		m_isDestroyable = false;
		m_maxHealth = 1000;
		m_speedReduction = 1;
		break;
	case STONE:
		m_isWalkable = false;
		m_isDestroyable = true;
		m_maxHealth = 500;
		m_speedReduction = 1;
		break;
	case BRICK:
		m_isWalkable = false;
		m_isDestroyable = true;
		m_maxHealth = 100;
		m_speedReduction = 1;
		break;
	case GRASS:
		m_isWalkable = true;
		m_isDestroyable = true;
		m_maxHealth = 20;
		m_speedReduction = 1;
		break;
	case WATHER:
		m_isWalkable = true;
		m_isDestroyable = false;
		m_maxHealth = 1000;
		m_speedReduction = 1;
		break;
	default:
		break;
	}
}

float BoxData::getSpeedReduction()
{
	return m_speedReduction;
}

bool BoxData::isWalkable()
{
	return m_isWalkable;
}

bool BoxData::isDestroyable()
{
	return m_isDestroyable;
}

float BoxData::getMaxHealth()
{
	return m_maxHealth;
}

BoxType BoxData::getType()
{
	return m_type;
}
