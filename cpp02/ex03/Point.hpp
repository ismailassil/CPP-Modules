/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 00:50:45 by iassil            #+#    #+#             */
/*   Updated: 2024/06/10 16:47:57 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Fixed.hpp"

class Point {
	private:
		const Fixed	x;
		const Fixed	y;
	
	public:
		Point( void ); // Default Constructor
		Point( float x, float y );
		Point( const Point& point ); // Copy Constructor
		Point&	operator=( const Point& point );
		~Point( void );
		float			getPointx( void ) const ;
		float			getPointy( void ) const ;
		static float	area( const Point point1, const Point point2, const Point point3 );
};

bool	bsp( Point const a, Point const b, Point const c, Point const point );
