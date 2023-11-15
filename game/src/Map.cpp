#include "Map.h"


Map::Map(int w,int h)
{

	for (int i = 0; i < BoxType::MAX; ++i)
	{
		boxTypes.push_back(new BoxData(static_cast<BoxType>(i)));
	}

	for(int i=0;i<w;++i)
	{
		std::vector<Box> line;
		for (int j = 0; j < h; ++j)
		{
			line.push_back(Box(Vector3(i, j, 0), boxTypes[rand() % BoxType::MAX]));
		}
		map.push_back(line);
	}
}
