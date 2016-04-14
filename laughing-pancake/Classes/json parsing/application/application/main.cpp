#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "json.h"

using namespace std;

struct Character{
	string imagePath;
	string name;
	string index;
	string power;
	string defence;
	string speed;
	string strength;
	string property;
};

map<int, Character> map_c;

int main()
{
	std::string fileName = ("characterInfo2.json");
	Json json;
	json.read(fileName.c_str());
	Json::Document& doc = json.document();
	Json::Value& gem = doc["Character"];
	for (Json::SizeType i = 0; i<gem.Size(); i++)
	{
		Character temp;
		temp.imagePath = gem[i]["imagePath"].GetString();
		temp.name = gem[i]["name"].GetString();
		temp.index = gem[i]["index"].GetString();
		temp.power = gem[i]["power"].GetString();
		temp.defence = gem[i]["defence"].GetString();
		temp.speed = gem[i]["speed"].GetString();
		temp.strength = gem[i]["strength"].GetString();
		temp.property = gem[i]["property"].GetString();
		map_c.insert(make_pair(i, temp));


		//그냥 출력
		/*
		std::cout << gem[i]["imagePath"].GetString() << std::endl;
		std::cout << gem[i]["name"].GetString() << std::endl;
		std::cout << gem[i]["index"].GetString() << std::endl;
		std::cout << gem[i]["power"].GetString() << std::endl;
		std::cout << gem[i]["defence"].GetString() << std::endl;
		std::cout << gem[i]["speed"].GetString() << std::endl;
		std::cout << gem[i]["strength"].GetString() << std::endl;
		std::cout << gem[i]["property"].GetString() << std::endl;
		*/
	}

	map<int, Character>::iterator iter;
	for (iter = map_c.begin(); iter != map_c.end(); iter++)
	{
		std::cout << (*iter).first << std::endl;
		std::cout << (*iter).second.defence << std::endl;
		std::cout << (*iter).second.imagePath << std::endl;
		std::cout << (*iter).second.index << std::endl;
		std::cout << (*iter).second.name << std::endl;
		std::cout << (*iter).second.power << std::endl;
		std::cout << (*iter).second.property << std::endl;
		std::cout << (*iter).second.speed << std::endl;
		std::cout << (*iter).second.strength << std::endl << std::endl;
	}
	return 0;
}