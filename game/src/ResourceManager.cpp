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

Object* ResourceManager::GetResource(std::string resource)
{
	auto it = resources.find(resource);
	if (it != resources.end()) {
		return resources[resource];

	}
	else {
		return nullptr;
	}
}

std::string ResourceManager::readTxtFile(std::string filePath) {
	std::ifstream archivo(filePath);

	
	if (!archivo.is_open()) {
		std::cerr << "Error al abrir el archivo " << filePath << std::endl;
		return "";
	}

	std::string contenidoArchivo;
	char caracter;
	while (archivo.get(caracter)) {
		if (caracter == '\n') {
			continue;
		}
		contenidoArchivo += caracter;
	}

	
	archivo.close();

	
	return contenidoArchivo;

}