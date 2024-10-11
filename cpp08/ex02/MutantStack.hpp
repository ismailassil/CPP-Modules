/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 13:11:12 by iassil            #+#    #+#             */
/*   Updated: 2024/10/04 18:48:31 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <deque>
#include <stack>

template < typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T> {
	public:
		typedef typename Container::iterator iterator;
		typedef typename Container::const_iterator const_iterator;

		iterator begin() {
			return ( this->c.begin() );
		}
		iterator end() {
			return ( this->c.end() );
		}

		const_iterator begin() const {
			return ( this->c.begin() );
		}
		const_iterator end() const {
			return ( this->c.end() );
		}
};