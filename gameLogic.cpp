#include <iostream>
#include "gameLogic.h"
#include "constants.h"

void dialogue()
{
	int cLevel{getLevel()};

	int trueHealth{ levelMultiplier(constants::baseCharacterHealth, cLevel) };

	std::cout << "Your health is: " << trueHealth
		<< '\n';

	int trueGoblinHealth{ levelMultiplier(constants::baseGoblinHealth, cLevel) };
	int trueGoblinDamage{ levelMultiplier(constants::baseGoblinDamage, cLevel) };

	std::cout << "A goblin creeps forth..." << '\n' << "WHAM! " << "You've "
		<< "taken damage. " << '\n' << "Health: " << calcDamage(trueHealth, trueGoblinDamage);

}

int levelMultiplier(int x, int y)
{

	int level{ y };


	int newValue{ x * level };
	return newValue;
}

int getLevel()
{
	std::cout << "What is thine level?" << '\n';
	int x{};
	std::cin >> x;

	if (x <= 0) {
		std::cout << "Invalid input, setting level to 1.\n";
		x = 1;
	}
	return x;
}

int calcDamage(int x, int y)
{
	return x - y;
}