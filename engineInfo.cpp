#include "engineInfo.h"
#include <iostream>
#include <string>
#include "constants.h"

// Displays the system information to make it easy to see progress
void engineInfo()
{
	bool Status{ true };
	std::cout << std::boolalpha;

	std::cout << Messages::engineName << " is starting." << '\n' << "Version: " 
		<< Messages::versionNum << '\n' << "Engine Status: " << Status << '\n';
}