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
	virtual void PrintInformation()
	{
		std::cout << "Name : " << Name << "\n";
		std::cout << "Description : " << Description << "\n";
		std::cout << "Quantity : " << Quantity << "\n";
		std::cout << "Weight : " << Weight << "\n";
	}

	void NonVirtualFunc()
	{
		std::cout << "Item::NonVirtualFunc()\n";
	}

	virtual void VirtualFunc()
	{
		std::cout << "Item::VirtualFunc()\n";
	}

	bool operator>(Item& Other)
	{
		return Quantity > Other.Quantity;
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
	UsableItem()
		: Item()
	{
		;
	}
	UsableItem(std::string NewName, std::string NewDescription, int NewQuantity, float NewWeight)
		: Item(NewName, NewDescription, NewQuantity, NewWeight)
	{
		;
	}

public:
	void PrintInformation() override
	{
		std::cout << "Name : " << Name << "\n";
		std::cout << "Description : " << Description << "\n";
		std::cout << "Quantity : " << Quantity << "\n";
		std::cout << "Weight : " << Weight << "\n";
		std::cout << "Type : Usable\n";
	}

	void Use()
	{
		std::cout << "Use an item\n";
	}

	void NonVirtualFunc()
	{
		std::cout << "UsableItem::NonVirtualFunc()\n";
	}

	void VirtualFunc()
	{
		std::cout << "UsableItem::VirtualFunc()\n";
	}
};

class EquipableItem : public Item
{
public:
	EquipableItem()
		: Item()
	{
		;
	}
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
