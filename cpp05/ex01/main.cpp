/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 09:28:36 by iassil            #+#    #+#             */
/*   Updated: 2024/10/02 18:38:59 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <exception>

int main( void ) {
	try {
		Form a1("Ismail", 13, 15);
		Bureaucrat b1("Assil", 19);

		a1.beSigned(b1);
		std::cout << a1 << std::endl;
	} catch (std::exception& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	std::cout << "==============\n";

	try {
		Form a1("Ismail", 19, 20);
		Bureaucrat b1("Assil", 19);
		a1.beSigned(b1);

		std::cout << a1 << std::endl;
		b1.signForm(a1);
	} catch (std::exception& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	return (0);
}
