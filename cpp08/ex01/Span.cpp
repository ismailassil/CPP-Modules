/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 11:10:15 by iassil            #+#    #+#             */
/*   Updated: 2024/10/15 16:52:36 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() { }
	
Span::Span( uint n ) : max_size(n) { }
	
Span::Span( const Span& obj ) : max_size(obj.vec.size()) {
	for ( uint i = 0; i < obj.vec.size(); i++ ) {
		vec.push_back(obj.vec.at(i));
	}
}
	
Span& Span::operator=( const Span& obj ) {
	if ( &obj != this ) {
		vec.clear();
		max_size = obj.vec.size();
		for ( uint i = 0; i < obj.vec.size(); i++ ) {
			vec.push_back(obj.vec.at(i));
		}
	}
	return ( *this );
}
	
Span::~Span() { }

void	Span::addNumber( int input ) {
	if ( vec.size() >= max_size )
		throw SpanFullException();
	vec.push_back(input);
}

uint	Span::shortestSpan( void ) {
	std::vector<int>	tmp = vec;
	int	span;

	if ( vec.empty() )
		throw Span::EmptySpanException();
		
	if ( vec.size() <= 2 )
		throw Span::SpanTooShortException();

	std::sort(tmp.begin(), tmp.end());
	span = *(tmp.begin() + 1) - *(tmp.begin());
	for ( uint i = 1; i < tmp.size() - 1; i++ ) {
		if (span > tmp.at(i + 1) - tmp.at(i))
			span = tmp.at(i + 1) - tmp.at(i);
	}
	return ( span );
}

uint	Span::longestSpan( void ) {
	std::vector<int>	tmp = vec;

	std::sort(tmp.begin(), tmp.end());
	// return ( *tmp.end() - *tmp.begin() );
	return ( tmp.back() - tmp.front() );
}

void	Span::printSpan( void ) {
	for ( uint i = 0; i < vec.size(); i++ ) {
		std::cout << vec.at(i);
		if (i + 1 == vec.size())
			std::cout << std::endl;
		else
			std::cout << ' ';
	}
}

const char * Span::SpanFullException::what() const throw() {
	return ( "Span Container is full!" );
}

const char * Span::NotEnoughSpaceException::what() const throw() {
	return ( "Not Enough Space in Span Container!" );
}

const char * Span::SpanTooShortException::what() const throw() {
	return ( "The Span has limited stored numbers!" );
}

const char * Span::EmptySpanException::what() const throw() {
	return ( "The Span is empty!" );
}
