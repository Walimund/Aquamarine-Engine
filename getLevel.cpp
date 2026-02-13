#include <iostream>

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