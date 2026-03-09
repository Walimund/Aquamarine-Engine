#include <iostream>
#include <string>
#include "gameLogic.h"
#include "constants.h"

// Core function that starts the game
void dialogue()
{
	int cLevel{getLevel()};

	int trueHealth{ levelMultiplier(constants::baseCharacterHealth, cLevel) };
	int trueDamage{ levelMultiplier(constants::baseCharacterDamagw, cLevel) };

	std::cout << Messages::healthPrompt << trueHealth
		<< '\n';

	int trueGoblinHealth{ levelMultiplier(constants::baseGoblinHealth, cLevel) };
	int trueGoblinDamage{ levelMultiplier(constants::baseGoblinDamage, cLevel) };

	std::cout << Messages::goblinBattle << '\n'
		<< battlePrompt(trueDamage, trueGoblinDamage, trueHealth, trueGoblinHealth);
}

// Gives an answer from 2 multiplied numbers
int levelMultiplier(int x, int y)
{

	int level{ y };


	int newValue{ x * level };
	return newValue;
}

// Gets the level from the user
int getLevel()
{
	std::cout << Messages::levelPrompt;
	int x{};
	std::cin >> x;

	if (x <= 0) {
		std::cout << Messages::invalidLevel;
		x = 1;
	}
	return x;
}

// Simple damage calculation by subtracting two ints
int calcDamage(int x, int y)
{
	return x - y;
}

// Begins battle prompt and simple battle actions
int battlePrompt(int cd, int gd, int ch, int gh)
{
	std::cout << Messages::battlePrompt;
	
	std::string battleChoice{};
	std::getline(std::cin >> std::ws, battleChoice);

	if (battleChoice == "FIGHT")
		return calcDamage(gh, cd);
	else if (battleChoice == "FLEE")
		return calcDamage(ch, gd);
	else if (battleChoice == "ITEM")
		std::cout << "You have no items!\n";
	else
		std::cout << "Invalid input! Trying to flee\n";

	if (ch == 0)
		std::cout << Messages::death;

	return calcDamage(ch, gd);

}