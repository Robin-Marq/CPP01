/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarquar <rmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 13:33:54 by rmarquar          #+#    #+#             */
/*   Updated: 2024/03/27 14:15:58 by rmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::cout << std::endl;

	std::string string_original = "HI THIS IS BRAIN";
	std::string *stringPTR = &string_original;
	std::string &stringREF = string_original;

	std::cout << "\x1b[35m";
	std::cout << "The adress of string_original is: " << &string_original << std::endl;
	std::cout << "The adress of stringPTR is      : " << stringPTR << std::endl;
	std::cout << "The adress of stringREF is      : " << &stringREF << std::endl;
	std::cout << "\x1b[0m";

	std::cout << std::endl;

	std::cout << "\x1b[34m";
	std::cout << "The value of the string_original is: " << string_original << std::endl;
	std::cout << "The value of the stringPTR is      : " << *stringPTR << std::endl;
	std::cout << "The value of the stringREF is      : " << stringREF << std::endl;
	std::cout << "\x1b[0m";

	std::cout << std::endl;

	return (0);
}
