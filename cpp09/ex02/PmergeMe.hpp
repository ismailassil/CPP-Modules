/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 14:54:06 by iassil            #+#    #+#             */
/*   Updated: 2024/10/09 19:24:36 by iassil           ###   ########.fr       */
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
		char**	av;
		bool	isSorted;
		size_t	size;
		
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

		void	printArguments( void );

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

		template <typename T>
		static void		sortPairs( T& Container ) { // Insertion Sort
			int	length = static_cast<int>( Container.size() );

			for ( int i = 1; i < length; i++ ) {
				std::pair<int64_t, int64_t> p = Container.at(i);
				int	j = i;

				while ( j > 0 && p.first < Container.at(j - 1).first ) {
					Container.at(j) = Container.at(j - 1);
					j--;
				}
				Container.at(j) = p;
			}
		}

		template <typename Container>
		static Container	JacobsthalNumber( size_t size ) {
			Container	vec(size + 1);

			vec[0] = 0;
			vec[1] = 1;

			for ( int i = 2; i <= static_cast<int>(size); i++ ) {
				vec[i] = vec[i - 1] + 2 * vec[i - 2];
			}

			Container	ansVec;

			for ( int i = 1; i < static_cast<int>(vec.size()); i++ ) {
				int	l = vec.at( i - 1 ), r = vec.at( i );
				while ( r > l ) {
					ansVec.push_back( r-- );
				}
				if (ansVec.size() >= size)
					break;
			}

			return ( ansVec );
		}
};