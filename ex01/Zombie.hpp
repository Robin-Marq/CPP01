/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarquar <rmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 13:20:45 by rmarquar          #+#    #+#             */
/*   Updated: 2024/03/22 13:27:00 by rmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <iostream>


// This is the class declaration called Zombie
// from Robin Marquardt
class Zombie
{
private:
	std::string _name;

public:
	Zombie();
	~Zombie();
	void setName(const std::string &first_name);
	std::string getName() const;
	void announce(void);
};

Zombie* zombieHorde( int N, std::string name );
void printWelcomeMessage();
void printWelcomeMessage2();

#endif
