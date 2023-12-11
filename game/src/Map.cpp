#include "Map.h"
#include "WindowManager.h"

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
	for (int i = 0; i < w; ++i)
	{
		//Modificar a generacion con automata celular
		std::vector<Box> line;
		for (int j = 0; j < h; ++j)
		{
			line.push_back(Box(Vector3(i, j, 0), boxTypes[rand() % BoxType::MAX]));
		}
		map.push_back(line);
	}
}

void Map::Draw()
{
	for (int i = 0; i < w; ++i)
	{
		for (int j = 0; j < h; ++j)
		{
			WindowManager::GetPtr()->Draw(
				map[i][j].getBoxData()->getSprite(),
				Vector3(i * 60, j * 60,0));
		}
	}
}
