#pragma once

#include <string>
#include <iostream>

class Item
{
public:
	std::string Name = "Default";
	std::string Description = "This is a default item.";
	int Quantity = 1;
	float Weight = 1.0;
};

class UsableItem : public Item
{
public:
	void Use()
	{
		std::cout << "Use an item\n";
	}
};

class EquipableItem : public Item
{
public:
	void Equip()
	{
		std::cout << "Equip an item\n";
	}
};
