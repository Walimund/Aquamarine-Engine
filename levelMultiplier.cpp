#include <iostream>

int levelMultiplier(int x, int y)
{

	int level{ y };


	int newValue{ x * level};
	return newValue;
}