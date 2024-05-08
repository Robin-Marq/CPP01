/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarquar <rmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 14:24:00 by rmarquar          #+#    #+#             */
/*   Updated: 2024/03/28 16:19:11 by rmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

int main()
{
{
Weapon club = Weapon("crude spiked club"); // create a weapon class

HumanA bob("Bob", club); // create a human class called Bob with the weapon class club
bob.attack(); // call the attack function
club.setType("some other type of club"); // change the type of the weapon
bob.attack(); // call the attack function again
}
{
Weapon club = Weapon("crude spiked club"); // create a weapon class

HumanB jim("Jim"); // create a human class called Jim
jim.setWeapon(club); // set the weapon of Jim to club
jim.attack(); // call the attack function
club.setType("some other type of club"); // change the type of the weapon
jim.attack(); // call the attack function again
}
// system ("leaks program");

return 0;
}
