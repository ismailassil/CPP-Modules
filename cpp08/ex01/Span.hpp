/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 11:04:54 by iassil            #+#    #+#             */
/*   Updated: 2024/10/15 17:22:20 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <exception>
#include <vector>
#include <iostream> // IWYU pragma: keep

class Span {
	private:
		std::vector<int>	vec;
		uint				max_size;
		Span();

	public:
		Span( uint n );
		Span( const Span& );
		Span& operator=( const Span& );
		~Span();

		void	printSpan( void );
		void	addNumber( int input );

		template <typename Iterator>
		void	addNumbers( const Iterator& first, const Iterator& last ) {
			uint	length = std::distance(first, last);

			if ( length + vec.size() > max_size )
				throw Span::NotEnoughSpaceException();

			vec.insert( vec.end(), first, last );

		}

		uint	shortestSpan( void );
		uint	longestSpan( void );

		class SpanFullException : public std::exception {
			public:
				const char * what() const throw();
		};

		class NotEnoughSpaceException : public std::exception {
			public:
				const char * what() const throw();
		};

		class SpanTooShortException : public std::exception {
			public:
				const char * what() const throw();
		};

		class EmptySpanException : public std::exception {
			public:
				const char * what() const throw();
		};
};