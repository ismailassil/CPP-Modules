/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 09:28:36 by iassil            #+#    #+#             */
/*   Updated: 2024/10/11 18:46:39 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Intern.hpp"

int	main() {
	Intern someRandomIntern;
	AForm* rrf = NULL;

	try {
		rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
	}
	catch ( const std::exception& e ) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	delete rrf;
}