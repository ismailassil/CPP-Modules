/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 23:50:02 by musashi           #+#    #+#             */
/*   Updated: 2024/06/04 19:02:23 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main (void) {
	std::string	input;
	PhoneBook	phonebook;

	while (!std::cin.eof())
	{
		std::cout << "Enter one of the commands [ADD | SEARCH | EXIT]\n=> ";
		std::getline(std::cin >> std::ws, input);
		if (input == "ADD")
			phonebook.add();
		else if (input == "SEARCH")
		{
			phonebook.printContacts();
			phonebook.getIndex();
		}
		else if (input == "EXIT")
			break ;
	}
	return (0);
}
