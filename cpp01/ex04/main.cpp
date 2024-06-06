/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 02:16:50 by iassil            #+#    #+#             */
/*   Updated: 2024/06/06 12:29:55 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main( int ac, char **av ) {
	if (ac != 4)
		return (1);
	
	Replace	replace_file (av[1], av[2], av[3]);
	replace_file.ReplaceString();
}
