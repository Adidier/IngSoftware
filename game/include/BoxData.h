#pragma once

enum BoxType
{
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
	
private:
	void setProperties();
	

	//Texture m_texture;
	BoxType m_type;
	bool m_isWalkable;
	bool m_isDestroyable;
	float m_maxHealth;
	float m_speedReduction;
};