/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 17:23:17 by iassil            #+#    #+#             */
/*   Updated: 2024/06/09 03:39:24 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void ) {
	if (bsp(Point(0, 0), Point(20, 0), Point(10, 30), Point(10, 15)))
		std::cout << "The point is inside the Triangle" << std::endl;
	else
		std::cout << "The point is NOT inside the Triangle" << std::endl;
	return (0);
}