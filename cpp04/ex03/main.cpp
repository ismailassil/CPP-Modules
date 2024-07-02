/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 10:21:35 by iassil            #+#    #+#             */
/*   Updated: 2024/07/02 09:32:19 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void leaks(void) {
	system("leaks amateria");
}

int main( void ) {
	atexit(leaks);
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	// delete tmp;
	tmp = src->createMateria("cure");
	me->equip(tmp);
	// delete tmp;

	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

	return (0);
}
/**
 *  2 (64 bytes) << TOTAL >>
    1 (32 bytes) ROOT LEAK: <Cure 0x7ff866405a30> [32]
    1 (32 bytes) ROOT LEAK: <Ice 0x7ff8664059f0> [32]
*/