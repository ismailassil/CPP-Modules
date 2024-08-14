/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 03:40:44 by iassil            #+#    #+#             */
/*   Updated: 2024/08/13 06:17:44 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main( void ) {
	try {
		Bureaucrat b1("Alice", 50);
		Bureaucrat b2("Bob", 150);
		
		std::cout << b1 << std::endl;
		std::cout << b2 << std::endl;

		b1.incrementGrade();
		b2.decrementGrade();

	} catch (const Bureaucrat::GradeTooHighException& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	} catch (const Bureaucrat::GradeTooLowException& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	return (0);
}
