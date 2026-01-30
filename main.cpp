#include <iostream>
#include <string>

// Displays the Engine information
void systemInfo()
{
	std::string EngineName{ "Aquamarine Engine" };

	std::string Version{ "1.0" };

	bool Status{ true };
	std::cout << std::boolalpha;

	std::cout << EngineName << " is starting." << '\n' << "Version: " << Version
		<< '\n' << "Engine Status: " << Status << '\n';
}

int main()
{
	systemInfo();

	return 0;
}