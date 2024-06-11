/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 00:50:47 by iassil            #+#    #+#             */
/*   Updated: 2024/06/10 16:56:15 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ) 
	: x ( 0 )
	, y ( 0 ) { }

Point::Point( float a, float b ) 
	: x ( a )
	, y ( b ) { }

Point::Point( const Point& point )
	: x ( point.x )
	, y ( point.y ) { }

Point&	Point::operator=( const Point& point ) {
	if (this == &point)
		return (*this);
	(Fixed)this->x = point.x;
	(Fixed)this->y = point.y;
	return (*this);
}

Point::~Point( void ) { }

float	Point::getPointx( void ) const {
	return (x.toFloat());
}

float	Point::getPointy( void ) const {
	return (y.toFloat());
}

float	Point::area( const Point point1, const Point point2, const Point point3 ) {
	float	result = (point1.getPointx() * (point2.getPointy() - point3.getPointy()) \
		+ point2.getPointx() * (point3.getPointy() - point1.getPointy()) + point3.getPointx() \
		* (point1.getPointy() - point2.getPointy())) / 2.0;
	if (result < 0)
		result *= -1;
	return (result);
}
