/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarquar <rmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 14:24:42 by rmarquar          #+#    #+#             */
/*   Updated: 2024/03/27 14:33:38 by rmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"

class HumanA
{
private:
	std::string _name;
	class Weapon &_weapon;

	public:
	HumanA(std::string name, Weapon &Weapon);
	~HumanA();

	void attack();

};

#endif
