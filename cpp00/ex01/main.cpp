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
/*
first name, last name, nickname, phone number, and
darkest secret.
*/
int	main( void )
{
	using namespace	std;
	string			str;

	while (!cin.eof())
	{
		cout << "Enter a command: ";
		getline(cin, str);
		if (str == "ADD")
		{
			// add contact
		}
		else if (str == "SEARCH")
			cout << "SEARCH\n";
		else if (str == "EXIT")
		{
			cout << "EXIT";
			break ;
		}
	}
	cout << "\n";
	return (0);
}