/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 12:02:54 by iassil            #+#    #+#             */
/*   Updated: 2024/10/02 20:39:23 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"
#include <exception>

class AForm;

class Intern {
	private:
		static const std::string	formNames[];
		static const size_t			numForms;

	public:
		Intern();
		Intern( const Intern& obj );
		Intern& operator=(const Intern& obj );
		~Intern();

		AForm*	makeForm(const std::string& formName, const std::string& target);
		
		static AForm*	newShrubbery(const std::string& target);
		static AForm*	newRobotomy(const std::string& target);
		static AForm*	newPresidential(const std::string& target);

		class FormNotFoundException : public std::exception {
			const char* what() const throw();
		};
};