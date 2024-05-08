/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarquar <rmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 14:24:14 by rmarquar          #+#    #+#             */
/*   Updated: 2024/03/22 15:21:17 by rmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>
#include "HumanA.hpp"
#include "HumanB.hpp"

class Weapon
{
private:
	std::string _type; // Type of the weapon

public:
	Weapon(const std::string type); // Constructor
	~Weapon(); // Destructor

	void setType(const std::string type); // Set the type of the weapon
	const std::string &getType(void) ; // Get the type of the weapon
};

#endif
