#pragma once
#include <string>
#include <map>
#include "Object.h"

class ResourceManager
{
public:	
	static ResourceManager* GetPtr();
	void Load(std::string file);
private:
	static ResourceManager* ptr;
	std::map<std::string, Object *> resources;
	ResourceManager();
};