#include "engineInfo.h"
#include <iostream>
#include <string>

// Displays the system information to make it easy to see progress
void engineInfo()
{
	std::string EngineName{ "Aquamarine Engine" };

	std::string Version{ "1.0" };

	bool Status{ true };
	std::cout << std::boolalpha;

	std::cout << EngineName << " is starting." << '\n' << "Version: " << Version
		<< '\n' << "Engine Status: " << Status << '\n';
}