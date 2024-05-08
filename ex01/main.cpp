/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarquar <rmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 13:20:35 by rmarquar          #+#    #+#             */
/*   Updated: 2024/03/28 16:31:41 by rmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
		printWelcomeMessage();
		int N;
		std::cout << "\x1b[33m";
		std::cin >> N;
	if (std::cin.fail() || N <= 0 || N > 1000)
	{
		std::cout << "\x1b[31m";
		std::cout << "Invalid input" << std::endl;
		std::cout << "\x1b[0m";
		return 1;
	}
		std::cout << "\x1b[0m";
		printWelcomeMessage2();
		std::string name;
		std::cout << "\x1b[33m";
		std::cin >> name;
		std::cout << "\x1b[0m";
		std::cout << std::endl;

		Zombie *head = zombieHorde(N, name);

		for (int i = 0; i < N; i++)
		{
			std::cout << "Hello i am ";
			head[i].announce();
		std::cout << "nr. " << i + 1  << std::endl;
		}
	delete[] head;
	head = NULL;
	return 0;
}
	// system ("leaks Moar_brainz");
