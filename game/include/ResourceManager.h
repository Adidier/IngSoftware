#pragma once
#include <string>
#include <map>
#include "Object.h"

class ResourceManager
{
public:	
	static ResourceManager* GetPtr();
	void Load(std::string file);
	Object* GetResource(std::string resource);
private:
	static ResourceManager* ptr;
	std::map<std::string, Object *> resources;
	ResourceManager();
};