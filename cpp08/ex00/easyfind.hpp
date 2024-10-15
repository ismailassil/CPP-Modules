/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 09:38:12 by iassil            #+#    #+#             */
/*   Updated: 2024/10/15 15:44:38 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <algorithm>
#include <exception>

class OccurrenceNotFoundException : public std::exception {
	public:
		const char * what() const throw() {
			return ( "Occurrence Not Found!" );
		}
};

template <typename T>
typename T::iterator easyfind( T& container, int occ ) {
	typename T::iterator it = std::find(container.begin(), container.end(), occ);
	if ( it != container.end() )
		return ( it );
	throw OccurrenceNotFoundException();
}
