/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 11:04:54 by iassil            #+#    #+#             */
/*   Updated: 2024/10/04 13:08:09 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <exception>
#include <sys/_types/_u_int.h>
#include <vector>

class Span {
	private:
		std::vector<int>	vec;
		u_int				max_size;
		Span();

	public:
		Span( u_int n );
		Span( const Span& );
		Span& operator=( const Span& );
		~Span();

		void	printSpan( void );
		void	addNumber( int input );

		template <typename Iterator>
		void	addNumbers( const Iterator& first, const Iterator& last ) {
			u_int	length = std::distance(first, last);
			if ( length + vec.size() > max_size )
				throw Span::NotEnoughSpaceException();
			vec.insert(vec.end(), first, last);
		}

		u_int	shortestSpan( void );
		u_int	longestSpan( void );

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