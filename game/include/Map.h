#pragma once

#include <vector>
#include "Box.h"

class Map {
public:
	Map(int w,int h);
	
private:
	std::vector<std::vector<Box>> map;
	std::vector<BoxData*> boxTypes;
};