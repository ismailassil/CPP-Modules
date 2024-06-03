/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 17:32:01 by iassil            #+#    #+#             */
/*   Updated: 2024/06/03 17:38:25 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void	Contact::setFirstName(std::string first_name) {
	this->_first_name = first_name;
}

void	Contact::setLastName(std::string last_name) {
	this->_last_name = last_name;
}

void	Contact::setNickName(std::string nick_name) {
	this->_nick_name = nick_name;
}

void	Contact::setPhoneNumber(std::string phone_number) {
	this->_phone_number = phone_number;
}

void	Contact::setDarkestSecret(std::string darkest_secret) {
	this->_darkest_secret = darkest_secret;
}

std::string	Contact::getFirstName(void) {
	return this->_first_name;
}

std::string	Contact::getLastName(void) {
	return this->_last_name;
}

std::string	Contact::getNickName(void) {
	return this->_nick_name;
}

std::string	Contact::getPhoneNumber(void) {
	return this->_phone_number;
}

std::string	Contact::getDarkestSecret(void) {
	return this->_darkest_secret;
}

