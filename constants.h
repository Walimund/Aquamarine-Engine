#pragma once
#include <iostream>

namespace constants {

	inline constexpr int baseCharacterHealth{ 100 };
	inline constexpr int baseGoblinHealth{ 20 };
	inline constexpr int baseGoblinDamage{ 5 };
	inline constexpr int baseCharacterDamagw{ 10 };

}

namespace Messages {

	inline constexpr std::string_view welcome{ "Hello! Welcome to Aquamarine Engine." };
	inline constexpr std::string_view death{ "You have died..." };
	inline constexpr std::string_view victory{ "You have won!" };

	inline constexpr std::string_view goblinBattle{ "A goblin creeps forth..." };
	inline constexpr std::string_view healthPrompt{ "Your health is: " };
	inline constexpr std::string_view levelPrompt{ "What is thine level?\n" };
	inline constexpr std::string_view invalidLevel{ "Invalid input, setting level to 1.\n" };
	inline constexpr std::string_view battlePrompt{ "You've entered battle! What would you like to do?\nFIGHT, FLEE, or ITEM\n" };

	// Engine info constants
	inline constexpr std::string_view engineName{ "Aquamarine Engine" };
	inline constexpr std::string_view versionNum{ "1.0" };
}