/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarquar <rmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 13:21:50 by rmarquar          #+#    #+#             */
/*   Updated: 2024/03/27 14:06:47 by rmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <iostream>

class Zombie
{
private:
	std::string _name;

public:
	Zombie();
	~Zombie();
	Zombie(std::string name);
	void announce(void);
};

void randomChump(std::string name);
Zombie* newZombie(std::string name);

#endif
