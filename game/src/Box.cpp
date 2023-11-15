#include "Box.h"

Box::Box()
{
	m_position = Vector3();
	m_boxData = nullptr;
	m_currentHealt = 0;
}

Box::Box(Vector3 position, BoxData* data)
{
	m_position = position;
	m_boxData = data;
	m_currentHealt = m_boxData->getMaxHealth();
}

void Box::addDamage(float damage)
{
	m_currentHealt -= damage;
}

float Box::getSpeedReduction()
{
	return m_boxData->getSpeedReduction();
}

bool Box::isWalkable()
{
	return m_boxData->isWalkable();
}

bool Box::isDestroyable()
{
	return m_boxData->isWalkable();;
}

BoxType Box::getType()
{
	return m_boxData->getType();;
}

