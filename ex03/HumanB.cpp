/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarquar <rmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 14:25:17 by rmarquar          #+#    #+#             */
/*   Updated: 2024/03/28 16:05:59 by rmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

HumanB::HumanB(std::string name) : _weapon(NULL)
{
	std::cout << "\x1b[35m";
	this->_name = name;
	std::cout << "HumanB " << name << " created with no weapon" << std::endl;
	std::cout << "\x1b[0m";
}

HumanB::~HumanB()
{
	std::cout << "\x1b[35m";
	std::cout << "HumanB " << this->_name << " destroyed" << std::endl;
	std::cout << "\x1b[0m";
}

void HumanB::attack() const
{
	std::cout << "\x1b[34m";

	if (this->_weapon)
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
	else
		std::cout << this->_name << " has no weapon to attack with" << std::endl;

	std::cout << "\x1b[0m";
}

void HumanB::setWeapon(Weapon &weapon)
{
	std::cout << "\x1b[34m";
	this->_weapon = &weapon;
	std::cout << this->_name << " is now equipped with a " << this->_weapon->getType() << std::endl;
	std::cout << "\x1b[0m";
}
