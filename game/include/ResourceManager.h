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
	static std::string readTxtFile(std::string filePath);
private:
	static ResourceManager* ptr;
	std::map<std::string, Object *> resources;
	ResourceManager();
};