#include "Harl.hpp"

// Standard constructor
Harl::Harl()
{
}

// Standard destructor
Harl::~Harl()
{
}


void Harl::debug( void ) {
	std::cout << "\x1b[33m";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
	std::cout << "\x1b[0m";
}

void	Harl::info( void ) {
	std::cout << "\x1b[33m";
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
	std::cout << "\x1b[0m";
}

void	Harl::warning( void ) {
	std::cout << "\x1b[33m";
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
	std::cout << "\x1b[0m";
}

void	Harl::error( void ) {
	std::cout << "\x1b[33m";
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	std::cout << "\x1b[0m";
}

void Harl::complain(std::string level)
{
	Harl harl; // Create an instance of Harl

	func func_ptr[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error}; // Array of pointers to member functions

	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"}; // Array of strings

	for (int i = 0; i < 4; i++) // Loop through the arrays
	{
		if (level == levels[i]) // If the level matches the current level
			(harl.*func_ptr[i])(); // Call the function
	}
}
