/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 12:10:50 by iassil            #+#    #+#             */
/*   Updated: 2024/10/11 16:38:43 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

const std::string	Intern::formNames[] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};

const size_t		Intern::numForms = 3;

std::string	stringIgnoreCases(const std::string& s1) {
	std::string str = s1;

	for ( int i = 0; i < (int)s1.length(); i++ ) {
		if (s1.at(i) >= 'A' && s1.at(i) <= 'Z')
			str[i] = str[i] - 32;
	}
	return ( str );
}

const char* Intern::FormNotFoundException::what() const throw() {
	return ( "Form Not Found!" );
}

AForm*	Intern::newShrubbery(const std::string& target) {
	return (new ShrubberyCreationForm(target));
}

AForm*	Intern::newRobotomy(const std::string& target) {
	return (new RobotomyRequestForm(target));
}

AForm*	Intern::newPresidential(const std::string& target) {
	return (new PresidentialPardonForm(target));
}

AForm*	Intern::makeForm(const std::string& formName, const std::string& target) {
	AForm*	(*forms[])( const std::string& ) = {
		&Intern::newShrubbery, &Intern::newRobotomy, &Intern::newPresidential
	};
	std::string	str = stringIgnoreCases(formName);

	for ( int i = 0; i < (int)numForms; i++ ) {
		if (str == formNames[i]) {
			std::cout << "Intern creates " << str << " Form." << std::endl;
			return (forms[i](target));
		}
	}
	throw Intern::FormNotFoundException();
}

Intern::Intern() { }

Intern::Intern( const Intern& obj ) {
	(void)obj;
}

Intern& Intern::operator=(const Intern& obj ) {
	(void)obj;
	return (*this);
}

Intern::~Intern() { }

