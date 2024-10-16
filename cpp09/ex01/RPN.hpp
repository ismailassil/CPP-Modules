/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 11:35:32 by iassil            #+#    #+#             */
/*   Updated: 2024/10/16 15:02:38 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <cstdint>
#include <stack>
#include <iostream> // IWYU pragma: keep

#define MULT	'*'
#define PLUS	'+'
#define	SUB		'-'
#define DIV		'/'
#define ERROR	"Error"

class RPN {
	private:
		std::stack<int64_t> st;

	public:
		RPN();	
		RPN( const RPN& );
		RPN& operator=( const RPN& );
		~RPN();

		void			doMath( char* av );
		static bool		isNum( char c );
		static bool 	isToken( char c );
		static int64_t 	doOperation( std::stack<int64_t>& st, char c );
};