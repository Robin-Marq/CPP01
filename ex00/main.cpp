/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarquar <rmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 13:21:07 by rmarquar          #+#    #+#             */
/*   Updated: 2024/03/27 14:09:24 by rmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie stack("Foo_on_Stack");
	stack.announce();
	Zombie *heap = newZombie("Foo_on_Heap");
	heap->announce();
	randomChump("Foo_on_Random");

	delete heap;
	return 0;
}
