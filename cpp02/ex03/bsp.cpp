/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 00:50:50 by iassil            #+#    #+#             */
/*   Updated: 2024/06/10 15:51:06 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool	bsp( Point const a, Point const b, Point const c, Point const point ) {
	/* NOTE - How to Check if a given point lies inside a triangle or not */
	// First: Calculate the area of the given triangle ABC
	// Area = (x1 * ( y2 - y3 ) + x2 ( y3 - y1 ) + x3 ( y1 - y2 )) / 2
	// Second: Calculate the area of the triangle PAB [A1]
	// Third: Calculate the area of the triangle PAC [A2]
	// Fourth: Calculate the area of the triangle PBC [A3]
	// Finally: Compare if A == A1 + A2 + A3
	float	a1 = Point::area(a, b, c);
	float	a2 = Point::area(point, b, c);
	float	a3 = Point::area(a, point, c);
	float	a4 = Point::area(a, b, point);
	if (a1 == 0 || a2 == 0 || a3 == 0 || a4 == 0)
		return (false);
	return ( a1 == a2 + a3 + a4 );
}
