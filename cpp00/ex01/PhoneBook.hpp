/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 16:57:37 by iassil            #+#    #+#             */
/*   Updated: 2024/06/05 04:36:16 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"
#include "main.hpp"

class PhoneBook {
	private:
		Contact	_Contact[8];
		int		_size;
		int		_position;
	public:
		PhoneBook();
		void add(void);
		void printContacts(void);
		void getIndex(void);
};
#endif
