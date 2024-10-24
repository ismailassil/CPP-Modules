/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 06:22:27 by iassil            #+#    #+#             */
/*   Updated: 2024/06/05 06:22:28 by iassil           ###   ########.fr       */
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
