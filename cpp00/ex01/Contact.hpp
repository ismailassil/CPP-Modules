/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 16:57:52 by iassil            #+#    #+#             */
/*   Updated: 2024/06/05 00:26:59 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
#include "main.hpp"

class Contact {
	private:
		std::string _first_name;
		std::string _last_name;
		std::string _nick_name;
		std::string _phone_number;
		std::string _darkest_secret;

	public:
		std::string	getFirstName(void);
		std::string	getLastName(void);
		std::string	getNickName(void);
		std::string	getPhoneNumber(void);
		std::string	getDarkestSecret(void);
		void		setFirstName(std::string first_name);
		void		setLastName(std::string last_name);
		void		setNickName(std::string nick_name);
		void		setPhoneNumber(std::string phone_number);
		void		setDarkestSecret(std::string darkest_secret);
};

#endif
