/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarquar <rmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 14:25:01 by rmarquar          #+#    #+#             */
/*   Updated: 2024/03/27 14:17:13 by rmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"

class HumanB
{
private:
	std::string _name;
	class Weapon *_weapon;

public:
	HumanB(std::string name);
	~HumanB();

	void attack() const;
	void setWeapon(Weapon &weapon);

};

#endif
