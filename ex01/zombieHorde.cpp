/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarquar <rmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 13:20:57 by rmarquar          #+#    #+#             */
/*   Updated: 2024/03/27 14:11:51 by rmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// This function creates an array of N zombies on the heap and sets their name to the one passed as an argument
// The function returns a pointer to the first element of the array
// The array will be deleted in the main function
// from Robin Marquardt
Zombie* zombieHorde(int N, std::string name)
{
	Zombie *heap_zombies = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		heap_zombies[i].setName(name);
	}
	return heap_zombies;
}

// This function sets the name of the zombie to the one passed as an argument
// from Robin Marquardt
void Zombie::setName(const std::string & _name)
{
	this->_name = _name;
}

// This function returns the name of the zombie
// from Robin Marquardt
std::string Zombie::getName() const
{
	return this->_name;
}
