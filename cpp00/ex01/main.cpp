/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musashi <musashi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 23:50:02 by musashi           #+#    #+#             */
/*   Updated: 2024/04/08 00:47:05 by musashi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "class.hpp"
/*
first name, last name, nickname, phone number, and
darkest secret.
*/
int	main( void )
{
	std::string	str[6];
	PhoneBook	phonebook;

	while (!std::cin.eof())
	{
		std::cout << "Enter a command: ";
		std::getline(std::cin, str[0]);
		if (str[0] == "ADD")
		{
			std::cout << "Please, Fill all the information below" << std::endl;
			std::cout << "First Name: ";
			std::cin >> str[1];
			std::cout << "Last Name: ";
			std::cin >> str[2];
			std::cout << "Nickname Name: ";
			std::cin >> str[3];
			std::cout << "Phone Number: ";
			std::cin >> str[4];
			std::cout << "Darkest Secret: ";
			std::cin >> str[5];
			phonebook.add(str);
		}
		else if (str[0] == "SEARCH")
		{
		}
		else if (str[0] == "EXIT")
			break ;
	}
	return (0);
}