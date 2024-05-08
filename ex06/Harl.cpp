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
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
	std::cout << "\x1b[0m";
	}

	void	Harl::info( void ) {
	std::cout << "\x1b[33m";
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
	std::cout << "\x1b[0m";
	}

	void	Harl::warning( void ) {
	std::cout << "\x1b[33m";
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free."<< std::endl;
	std::cout << "I've been coming for years whereas you started working here since last month." << std::endl;
	std::cout << "\x1b[0m";
	}

	void	Harl::error( void ) {
	std::cout << "\x1b[33m";
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	std::cout << "\x1b[0m";
	}

	void Harl::complain(std::string level) {
	Harl harl; // Instanz of Harl

	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"}; // Array of strings

	int index = -1;

	for (int i = 0; i < 4; ++i) {
		if (level == levels[i]) {
			index = i;
			break;
		}
	}

	switch (index) {
		case 0:
			harl.debug();
			std::cout << std::endl;
			harl.info();
			std::cout << std::endl;
			harl.warning();
			std::cout << std::endl;
			harl.error();
			break;
		case 1:
			harl.info();
			std::cout << std::endl;
			harl.warning();
			std::cout << std::endl;
			harl.error();
			break;
		case 2:
			harl.warning();
			std::cout << std::endl;
			harl.error();
			break;
		case 3:
			harl.error();
			break;
		default:
			std::cout << "\x1b[33m";
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			std::cout << "\x1b[0m";
			break;
	}
	}
