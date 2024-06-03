/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 16:46:20 by iassil            #+#    #+#             */
/*   Updated: 2024/06/03 18:57:11 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

std::string	AdjustString(std::string ptr) {
	if (ptr.length() <= 10)
		return (ptr);
	return (ptr.substr(0, 9) + '.');
}

void	print_head(void) {
	std::cout << "\t" << std::string(10*4 + 4, '-') << '\n';
	std::cout << "\t|" << std::setw(10) << ID << "|";
	std::cout << std::setw(10) << FN << "|";
	std::cout << std::setw(10) << LN << "|";
	std::cout << std::setw(10) << NN << "|\n";
	std::cout << "\t" << std::string(10 * 4 + 5, '-') << '\n';
}

bool	addContact(std::string display, std::string str) {
	std::cout << " - " << display << ": ";
	if (!std::getline(std::cin, str))
		return (true);
	return (false);
}

void PhoneBook::add(void) {
	Contact		tmpContact;
	std::string	str;
	int			flag = 0;

	std::cout << "Please, Fill all the informations below:" << std::endl;
	std::cout << " - " << FN << ": ";
	(!std::getline(std::cin, str) ? flag = 1 : 0);
	(tmpContact.setFirstName(str), str.clear());
	std::cout << " - " << LN << ": ";
	(!std::getline(std::cin, str) ? flag = 1 : 0);
	(tmpContact.setLastName(str), str.clear());
	std::cout << " - " << NN << ": ";
	(!std::getline(std::cin, str) ? flag = 1 : 0);
	(tmpContact.setNickName(str), str.clear());
	std::cout << " - " << PN << ": ";
	(!std::getline(std::cin, str) ? flag = 1 : 0);
	(tmpContact.setPhoneNumber(str), str.clear());
	std::cout << " - " << DS << ": ";
	(!std::getline(std::cin, str) ? flag = 1: 0);
	(tmpContact.setDarkestSecret(str), str.clear());
	if (flag)
		return ;
	if (_size == 8) {
		if (_position == 8)
			_position = 0;
		_Contact[_position].setFirstName(tmpContact.getFirstName());
		_Contact[_position].setLastName(tmpContact.getLastName());
		_Contact[_position].setNickName(tmpContact.getNickName());
		_Contact[_position].setPhoneNumber(tmpContact.getPhoneNumber());
		_Contact[_position].setDarkestSecret(tmpContact.getDarkestSecret());
		_position++;
	} else {
		_Contact[_size].setFirstName(tmpContact.getFirstName());
		_Contact[_size].setLastName(tmpContact.getLastName());
		_Contact[_size].setNickName(tmpContact.getNickName());
		_Contact[_size].setPhoneNumber(tmpContact.getPhoneNumber());
		_Contact[_size].setDarkestSecret(tmpContact.getDarkestSecret());
		_size++;
	}
}

void PhoneBook::printContacts(void) {
	if (!_size)
	{
		std::cout << "|!| The PhoneBook is empty, try to add new contact!" << std::endl;
		return ;
	}
	print_head();
	for (int i = 0; i < _size; i++) {
		std::cout << "\t|" << std::setw(10) << i + 1 << "|";
		std::cout << std::setw(10) << AdjustString(_Contact[i].getFirstName()) << "|";
		std::cout << std::setw(10) << AdjustString(_Contact[i].getLastName()) << "|";
		std::cout << std::setw(10) << AdjustString(_Contact[i].getNickName()) << "|\n";
		std::cout << "\t" << std::string(10 * 4 + 5, '-') << '\n';
	}
}

void PhoneBook::getIndex(void) {
	int			num;
	std::string	str;

	if (!_size)
		return ;
	std::cout << "Select an index between [1 & " << _size << "] to display the contact information: ";
	while (true) {
		fflush(stdin);
		std::cin >> num;
		if (std::cin.fail())
		{		
			std::cout << "Wrong Input, Please try again: ";
			std::cin.clear();
			continue;
		}
		if (std::cin.eof())
			exit(1);
		if (num <= 0 || num > _size)
			std::cout << "Index out of range, Please try again: ";
		else
			break ;
	}
	std::cout << "\t - " << FN << ": " << _Contact[num - 1].getFirstName() << std::endl;
	std::cout << "\t - " << LN << ": " << _Contact[num - 1].getLastName() << std::endl;
	std::cout << "\t - " << NN << ": " << _Contact[num - 1].getNickName() << std::endl;
	std::cout << "\t - " << PN << ": " << _Contact[num - 1].getPhoneNumber() << std::endl;
	std::cout << "\t - " << DS << ": " << _Contact[num - 1].getDarkestSecret() << std::endl;
	fflush(stdin);
}