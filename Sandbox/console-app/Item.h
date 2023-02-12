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
