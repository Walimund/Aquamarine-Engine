#include <iostream>
#include "levelMultiplier.h"

void gameLogic()
{
	int baseCharacterHealth{ 100 };

	int baseGoblinHealth{ 50 };

	int baseGoblinDamage{ 10 };

	std::cout << "What is thine level?" << '\n';
	int cLevel{};
	std::cin >> cLevel;

	if (cLevel <= 0) {
		std::cout << "Invalid input, setting level to 1.\n";
		cLevel = 1;
	}

	int trueHealth{ levelMultiplier(baseCharacterHealth, cLevel) };

	std::cout << "Your health is: " << trueHealth
		<< '\n';

	int trueGoblinHealth{ levelMultiplier(baseGoblinHealth, cLevel) };
	int trueGoblinDamage{ levelMultiplier(baseGoblinDamage, cLevel) };

	std::cout << "A goblin creeps forth..." << '\n' << "WHAM! " << "You've "
		<< "taken damage. " << '\n' << "Health: " << trueHealth - trueGoblinDamage;

}