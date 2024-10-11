/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 09:28:36 by iassil            #+#    #+#             */
/*   Updated: 2024/10/02 18:41:43 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void	sClass(const std::string& title) {
	std::cout << std::endl << "*** " << title << " ***" << std::endl << std::endl;
}

void	testForm(const Bureaucrat& bureaucrat, AForm& form) {
	std::cout << form << '\n';
	form.beSigned(bureaucrat);
	bureaucrat.signForm(form);
	bureaucrat.executeForm(form);
	std::cout << form << '\n';
}

int	main() {
	Bureaucrat	burro("burro", 1);
	Bureaucrat	burretto("burretto", 42);
	std::cout << burro << '\n' << burretto << '\n';

	try {
		{
			sClass("Shrubbery Creation");
			ShrubberyCreationForm form("home");
			testForm(burro, form);
		}
		{
			sClass("Robotomy Request");
			Bureaucrat	selmo("selmo", 1);
			RobotomyRequestForm form("Bender");
			testForm(selmo, form);
		}
		{
			sClass("Presidential Pardon");
			PresidentialPardonForm form("lrocca");
			testForm(burro, form);
		}
		PresidentialPardonForm form("lrocca");
		{
			sClass("execute unsigned form");
			std::cout << form << '\n';
			burro.executeForm(form);
		}
		{
			sClass("too low to execute");
			burro.signForm(form);
			burretto.executeForm(form);
		}
	}
	catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
}