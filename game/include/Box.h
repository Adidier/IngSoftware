#pragma once
#include "Vector.h"
#include "BoxData.h"

class Box
{
public : 
	Box();
	Box(Vector3 position, BoxData* data);
	void addDamage(float damage);
	float getSpeedReduction();
	bool isWalkable();
	bool isDestroyable();
	BoxType getType();
	BoxData* getBoxData() { return m_boxData; }
private:
	void Destroy();
	BoxData* m_boxData;
	int m_currentHealt;
	Vector3 m_position;
};