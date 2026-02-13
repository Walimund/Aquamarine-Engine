#include <iostream>
#include "levelMultiplier.h"
#include "getLevel.h"

void gameLogic()
{
	int baseCharacterHealth{ 100 };

	int baseGoblinHealth{ 50 };

	int baseGoblinDamage{ 10 };

	int cLevel{getLevel()};

	int trueHealth{ levelMultiplier(baseCharacterHealth, cLevel) };

	std::cout << "Your health is: " << trueHealth
		<< '\n';

	int trueGoblinHealth{ levelMultiplier(baseGoblinHealth, cLevel) };
	int trueGoblinDamage{ levelMultiplier(baseGoblinDamage, cLevel) };

	std::cout << "A goblin creeps forth..." << '\n' << "WHAM! " << "You've "
		<< "taken damage. " << '\n' << "Health: " << trueHealth - trueGoblinDamage;

}