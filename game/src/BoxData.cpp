#include "BoxData.h"
#include "ResourceManager.h"



BoxData::BoxData()
{
	m_sprite = nullptr;
	m_type = BRICK;
	setProperties();
}

BoxData::BoxData(BoxType boxType)
{
	m_sprite = nullptr;
	m_type = boxType;
	setProperties();
}

void BoxData::setProperties()
{
	switch (m_type)
	{
	case IRON:		 
		m_isWalkable = false;
		m_isDestroyable = false;
		m_maxHealth = 1000;
		m_speedReduction = 1;
		m_sprite = dynamic_cast<Sprite*>(ResourceManager::GetPtr()->GetResource("Iron"));////
		break;
	case STONE:
		m_isWalkable = false;
		m_isDestroyable = true;
		m_maxHealth = 500;
		m_speedReduction = 1;
		m_sprite = dynamic_cast<Sprite*>(ResourceManager::GetPtr()->GetResource("Stone"));////
		break;
	case BRICK:
		m_isWalkable = false;
		m_isDestroyable = true;
		m_maxHealth = 100;
		m_speedReduction = 1;
		m_sprite = dynamic_cast<Sprite*>(ResourceManager::GetPtr()->GetResource("Brick"));////
		break;
	case GRASS:
		m_isWalkable = true;
		m_isDestroyable = true;
		m_maxHealth = 20;
		m_speedReduction = 1;
		m_sprite = dynamic_cast<Sprite*>(ResourceManager::GetPtr()->GetResource("Grass"));////
		break;
	case WATHER:
		m_isWalkable = true;
		m_isDestroyable = false;
		m_maxHealth = 1000;
		m_speedReduction = 1;
		m_sprite = dynamic_cast<Sprite*>(ResourceManager::GetPtr()->GetResource("Wather"));////
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
