#pragma once

#include <string>
#include <iostream>

class Item
{
public:
	Item()
	{
		;
	}
	Item(std::string NewName, std::string NewDescription, int NewQuantity, float NewWeight)
	{
		Name = NewName;
		Description = NewDescription;
		Quantity = NewQuantity;
		Weight = NewWeight;
	}

public:
	void PrintInformation()
	{
		std::cout << "Name : " << Name << "\n";
		std::cout << "Description : " << Description << "\n";
		std::cout << "Quantity : " << Quantity << "\n";
		std::cout << "Weight : " << Weight << "\n";
	}

protected:
	std::string Name = "Default";
	std::string Description = "This is a default item.";
	int Quantity = 1;
	float Weight = 1.0;
};

class UsableItem : public Item
{
public:
	UsableItem(std::string NewName, std::string NewDescription, int NewQuantity, float NewWeight)
		: Item(NewName, NewDescription, NewQuantity, NewWeight)
	{
		;
	}

public:
	void Use()
	{
		std::cout << "Use an item\n";
	}
};

class EquipableItem : public Item
{
public:
	EquipableItem(std::string NewName, std::string NewDescription, int NewQuantity, float NewWeight)
		: Item(NewName, NewDescription, NewQuantity, NewWeight)
	{
		;
	}

public:
	void Equip()
	{
		std::cout << "Equip an item\n";
	}
};
