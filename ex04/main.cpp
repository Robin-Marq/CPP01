/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarquar <rmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 10:07:09 by rmarquar          #+#    #+#             */
/*   Updated: 2024/03/28 16:32:50 by rmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "\x1b[33m";
		std::cout << std::endl << "Wrong nr. of arguments!" << std::endl << std::endl;
		std::cout << "\x1b[0m";
		return 0;
	}

	std::string s1 = argv[2];
	std::string s2 = argv[3];

	if (s1.empty() || s2.empty())
	{
		std::cout << "\x1b[33m";
		std::cout << std::endl << "Empty string!" << std::endl << std::endl;
		std::cout << "\x1b[0m";
		return 0;
	}

	std::ofstream new_file("test.txt.replace.txt");
	std::ifstream file (argv[1]);
	std::string buffer;

	if (!file.is_open()) {
		std::cout << "error, can not open input file" << std::endl;
		return 1;
	}

	while (std::getline(file, buffer))
	{
		size_t pos = buffer.find(s1);

		while (pos != std::string::npos)
		{
			buffer = buffer.substr(0, pos) + s2 + buffer.substr(pos + s1.length());
			pos = buffer.find(s1, pos + s2.length());
		}
		new_file << buffer << std::endl;
	}

	file.close();
	new_file.close();

return (0);
}
