#include "Map.h"
#include "WindowManager.h"
#include <fstream>
#include "ResourceManager.h"
#include <string>

Map::Map(int w,int h)
{
	this->w = w;
	this->h = h;
	for (int i = 0; i < BoxType::MAX; ++i)
	{
		boxTypes.push_back(new BoxData(static_cast<BoxType>(i)));
	}	
	generate();
}

void Map::generate() {///////////
	
	std::string mapString = ResourceManager::readTxtFile("assets/map.txt");

	for (int i = 0; i < 11; ++i)
	{
		//Modificar a generacion con automata celular
		std::vector<Box> line;
		for (int j = 0; j < 8; ++j)
		{
			int type = mapString[i * 8 +j] - 'O' + 31;
			line.push_back(Box(Vector3(i, j, 0), boxTypes[type]));
		}
		map.push_back(line);
	}
}

void Map::Draw()
{
	for (int i = 0; i < 11; ++i)
	{
		for (int j = 0; j <8; ++j)
		{
			WindowManager::GetPtr()->Draw(
				map[i][j].getBoxData()->getSprite(),
				Vector3(i * 60, j * 60,0));
		}
	}
}
