#include "Harl.hpp"
#include <iostream>

int main(int argc, char **argv)
{
	Harl harl;

	if (argc != 2)
	{
		std::cout << "\x1b[33m";
		std::cout << "To less arguments, please input like this:\n./harl [DEBUG|INFO|WARNING|ERROR]" << std::endl;
		std::cout << "\x1b[0m";
		return 1;
	}
	harl.complain(argv[1]);

	return 0;
}
