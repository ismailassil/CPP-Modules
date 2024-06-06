/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 03:04:17 by iassil            #+#    #+#             */
/*   Updated: 2024/06/06 09:42:34 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main( int ac, char **av ) {

	Harl	cHarl;

	switch (ac) {
		case 2:
			cHarl.complain(av[1]);
			break;
		default:
			std::cerr << "Error" << std::endl;
			return (1);
	}
	return (0);
}
