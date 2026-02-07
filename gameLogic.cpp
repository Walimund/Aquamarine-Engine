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

	int trueHealth{ levelMultiplier(baseCharacterHealth, cLevel) };

	std::cout << "Your health is: " << trueHealth
		<< '\n';

	int trueGoblinHealth{ levelMultiplier(baseGoblinHealth, cLevel) };
	int trueGoblinDamage{ levelMultiplier(baseGoblinDamage, cLevel) };

	std::cout << "A goblin creeps forth..." << '\n' << "WHAM! " << "You've "
		<< "taken damage. " << '\n' << "Health: " << trueHealth - trueGoblinDamage;

}