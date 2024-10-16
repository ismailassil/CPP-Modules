/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 14:54:06 by iassil            #+#    #+#             */
/*   Updated: 2024/10/16 17:24:04 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <cstddef>
#include <cstdint>
#include <deque>
#include <iostream> // IWYU pragma: keep
#include <vector>
#include <climits> // IWYU pragma: keep
#include <cstddef>
#include <cstdint>
#include <cstdlib>
#include <ctime>
#include <exception> // IWYU pragma: keep
#include <stdexcept> // IWYU pragma: keep
#include <utility> // IWYU pragma: keep
#include <iomanip> // IWYU pragma: keep

class PmergeMe {
	private:
		char**					av;
		std::vector<int64_t>	arguments;
		bool					isSorted;
		size_t					size;
		
		std::vector<int64_t>	vec;
		std::deque<int64_t>		deq;
		PmergeMe();

	public:
		PmergeMe( char** , size_t );
		PmergeMe( const PmergeMe& );
		PmergeMe& operator=( const PmergeMe& );
		~PmergeMe();

		void		parseVector( void );
		void		parseDeque( void );
		void		execute( void );

		static bool		isNum( char *str );
		static int64_t	atoi( char *str );

		void	vec_sort( void );
		void	deq_sort( void );

		template <typename Container>
		static bool		isDuplicate( Container& vec, int64_t val ) {
			typename Container::iterator it = std::find(vec.begin(), vec.end(), val);
			if ( it != vec.end() )
				return ( true );
			return ( false );
		}

		template <typename T>
		static void		printVec( T& Container ) { // Print the Element in the Container
			typename T::iterator	start	= Container.begin();
			typename T::iterator	end		= Container.end();

			for ( ; start != end; start++ ) {
				std::cout << *start;

				typename T::iterator next_it = start;
				if ( ++next_it != end )
					std::cout << ' ';

			}
			std::cout << std::endl;
		}

		static void		sortPairs( std::vector< std::pair<int64_t, int64_t> >& Container );
		static void		sortPairs( std::deque< std::pair<int64_t, int64_t> >& Container );

		static void		JacobsthalNumber( std::vector<int64_t>& Container, size_t size );
		static void		JacobsthalNumber( std::deque<int64_t>& Container, size_t size );
};