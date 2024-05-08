/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarquar <rmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 14:24:27 by rmarquar          #+#    #+#             */
/*   Updated: 2024/03/22 14:42:19 by rmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

// Constructor
// from Robin Marquardt
Weapon::Weapon(const std::string type) : _type(type) 
{
}

// Destructor
// from Robin Marquardt
Weapon::~Weapon() 
{
}

// Get the type of the weapon
// from Robin Marquardt
const std::string &Weapon::getType(){
	return (_type);
}

// Set the type of the weapon
// from Robin Marquardt
void Weapon::setType(const std::string type)
{
	this->_type = type;
}
