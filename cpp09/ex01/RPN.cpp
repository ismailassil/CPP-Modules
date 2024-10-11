/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 11:35:31 by iassil            #+#    #+#             */
/*   Updated: 2024/10/05 13:17:09 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <cctype>
#include <cstddef>

RPN::RPN() { }

RPN::RPN( const RPN& obj ) 
	:	st(obj.st) { }

RPN& RPN::operator=( const RPN& obj ) {
	if ( &obj != this )
		st = obj.st;
	return ( *this );
}

RPN::~RPN() { }

void	RPN::doMath( char* av ) {
	size_t	size	= std::strlen(av);
	bool	space	= false;

	if ( *av == '\0' || (av && std::isspace(av[0])) )
		throw "Error";
	for ( size_t i = 0; i < size; i++ ) {
		if ( !space && RPN::isNum(av[i]) ) {
			space = true;
			st.push( av[i] - '0' );
		} else if ( !space && RPN::isToken(av[i]) ) {
			space = true;
			if ( st.empty() || st.size() < 2 )
				throw "Error";
			int	ans;
			try {
				ans = doOperation(st, av[i]);
			} catch ( const char* e ) {
				throw e;
			}
			st.push( ans );
		} else if ( space && av[i] == ' ' ) {
			space = false;
			continue ;
		} else {
			throw "Error";
		}
	}
	std::cout << st.top() << std::endl;
}

bool	RPN::isNum( char c ) {
	if (c >= '0' && c <= '9')
		return ( true );
	return ( false );
}

bool	RPN::isToken( char c ) {	
	if ( c == MULT || c == DIV || c == SUB || c == PLUS )
		return ( true );
	return ( false );
}

int64_t 	RPN::doOperation( std::stack<int64_t>& st, char c ) {
	int64_t second = st.top();
	st.pop();
	int64_t first = st.top();
	st.pop();
	if ( c == MULT ) {
		if ( first * second > INT_MAX || first * second < INT_MIN )
			throw "Error - Overflow";
		return ( first * second );
	}
	else if ( c == PLUS ) {
		if ( first + second > INT_MAX || first + second < INT_MIN )
			throw "Error - Overflow";
		return ( first + second );
	}
	else if ( c == SUB ) {	
		if ( first - second > INT_MAX || first - second < INT_MIN )
			throw "Error - Overflow";
		return ( first - second );
	}
	else {
		if ( second == 0 )
			throw "Error - Can't divide by 0";
		if ( first / second > INT_MAX || first / second < INT_MIN )
			throw "Error - Overflow";
		return ( first / second );
	}
}
