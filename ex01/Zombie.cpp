/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarquar <rmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 13:20:29 by rmarquar          #+#    #+#             */
/*   Updated: 2024/03/27 14:11:26 by rmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// This is the Standard constructor
// This is the constructor: it is called when the object is created
// from Robin Marquardt
Zombie::Zombie()
{

}

// This is the deconstructor
// This is the destructor: it is called when the object is destroyed
// and prints a message to the console
// from Robin Marquardt
Zombie::~Zombie()
{
	std::cout << "\033[33m" << this->_name << " " << "destroyed" << "\033[0m" << std::endl;
}

// This is the announcment function
// This function prints the name of the zombie and a message to the console
// from Robin Marquardt
void Zombie::announce(void)
{
	std::cout << "\033[32m" << this->_name << " " << "BraiiiiiiinnnzzzZ..." << "\033[0m";
}

// This is the first welcome message
// from Robin Marquardt
void printWelcomeMessage()
{
	std::cout << "\x1b[32m";
	std::cout << std::endl << "-----------------------------------------" << std::endl;
	std::cout << "     Welcome to the Zombie Horde!" << std::endl;
	std::cout << "This will create some Zombies on the heap" << std::endl;
	std::cout << "        And then delete them" << std::endl;
	std::cout << "-----------------------------------------" << std::endl;
	std::cout << std::endl << "Please input the number of Zombies you want to create: " << std::endl;
	std::cout << "\x1b[0m";
}

// This is the second welcome message
// from Robin Marquardt
void printWelcomeMessage2()
{
	std::cout << "\x1b[32m";
	std::cout << "-----------------------------------------" << std::endl;
	std::cout << "Please input the name of the Zombies: ";
	std::cout << "\x1b[0m";
}
