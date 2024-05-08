/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarquar <rmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 13:21:42 by rmarquar          #+#    #+#             */
/*   Updated: 2024/03/27 14:10:53 by rmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{

}

Zombie::~Zombie()
{
	std::cout << "\033[33m" << this->_name << " " << "destroyed" << "\033[0m" << std::endl;
}

Zombie::Zombie(std::string name)
{
	this->_name = name;
}

void Zombie::announce(void)
{
	std::cout << "\033[32m" << this->_name << " " << "BraiiiiiiinnnzzzZ..." << "\033[0m" << std::endl;
}
