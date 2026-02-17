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

	std::cout << "Your health is: " << trueHealth
		<< '\n';

	int trueGoblinHealth{ levelMultiplier(constants::baseGoblinHealth, cLevel) };
	int trueGoblinDamage{ levelMultiplier(constants::baseGoblinDamage, cLevel) };

	std::cout << "A goblin creeps forth..." << '\n'
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
	std::cout << "What is thine level?" << '\n';
	int x{};
	std::cin >> x;

	if (x <= 0) {
		std::cout << "Invalid input, setting level to 1.\n";
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
	std::cout << "You've entered battle! What would you like to do?\n"
		<< "FIGHT, FLEE, or ITEM\n";
	
	std::string battleChoice{};
	std::getline(std::cin >> std::ws, battleChoice);

	if (battleChoice == "FIGHT")
		return calcDamage(gh, cd);
	else if (battleChoice == "FLEE")
		return calcDamage(ch, gd);
	else if (battleChoice == "ITEM")
		std::cout << "You have no items!\n";
	else
		std::cout << "Invalid input! Trying to flee";

		return calcDamage(ch, gd);
}