/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musashi <musashi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 23:33:30 by musashi           #+#    #+#             */
/*   Updated: 2024/04/08 00:09:29 by musashi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char	*ft_toupper(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

int	main(int ac, char **av)
{
	using namespace	std;
	int				i;

	i = 1;
	if (ac == 1)
		return (cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl, 0);
	while (av[i])
	{
		cout << ft_toupper(av[i]);
		if (av[i + 1])
			cout << ' ';
		i++;
	}
	cout << "\n";
	return (0);
}