/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 13:11:12 by iassil            #+#    #+#             */
/*   Updated: 2024/10/15 17:44:12 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream> // IWYU pragma: keep
#include <deque>
#include <stack>

template < typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container> {
	public:
		typedef typename Container::iterator iterator;
		typedef typename Container::const_iterator const_iterator;
		typedef typename Container::reverse_iterator reverse_iterator;
		typedef typename Container::const_iterator const_iterator;

		MutantStack() { }
		MutantStack( const MutantStack& obj ) { *this = obj; }
		MutantStack& operator=( const MutantStack& obj ) {
			std::stack<T, Container>::operator=( obj );
			return ( *this );
		}
		~MutantStack() { }

		iterator begin() {
			return ( this->c.begin() );
		}
		iterator end() {
			return ( this->c.end() );
		}

		reverse_iterator begin() {
			return ( this->c.begin() );
		}
		reverse_iterator end() {
			return ( this->c.end() );
		}

		const_reverse_iterator begin() const {
			return ( this->c.begin() );
		}
		const_reverse_iterator end() const {
			return ( this->c.end() );
		}

		const_iterator begin() const {
			return ( this->c.begin() );
		}
		const_iterator end() const {
			return ( this->c.end() );
		}
};
