/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarquar <rmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 14:24:51 by rmarquar          #+#    #+#             */
/*   Updated: 2024/03/27 14:34:01 by rmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::~HumanA()
{
	std::cout << "\x1b[35m";
	std::cout << "HumanA " << _name << " destroyed" << std::endl;
	std::cout << "\x1b[0m";
}

HumanA::HumanA(std::string name, Weapon &Weapon) : _name(name), _weapon(Weapon)
{
	std::cout << "\x1b[35m";
	std::cout << "HumanA " << _name << " created with ";
	std::cout << _weapon.getType() << std::endl;
	std::cout << "\x1b[0m";
}


void HumanA::attack()
{
	std::cout << "\x1b[34m";
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
	std::cout << "\x1b[0m";
}
