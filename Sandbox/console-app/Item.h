#pragma once

#include <string>

struct Item
{
	std::string Name = "Default";
	std::string Description = "This is a default item.";
	int Quantity = 1;
	float Weight = 1.0;
};
