#include "ResourceManager.h"
#include "Sprite.h"
#include <iostream>
#include <fstream>

ResourceManager* ResourceManager::ptr = nullptr;

ResourceManager* ResourceManager::GetPtr()
{
	if(!ptr)
	{
		ptr = new ResourceManager();
	}
	return ptr;
}

void ResourceManager::Load(std::string file)
{
	std::fstream files;
	std::string line;

	files.open(file, std::ios::in);
	while(std::getline(files, line))
	{
		int endName = line.find(" ");
		int size = line.size();
		std::string name = line.substr(0, endName);
		std::string path = line.substr(endName + 1, size - 1);

		resources[name] = new Sprite(path);
		std::cout << line << std::endl;
	}
	files.close();
}

ResourceManager::ResourceManager()
{

}