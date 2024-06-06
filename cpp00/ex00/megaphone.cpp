/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 06:22:44 by iassil            #+#    #+#             */
/*   Updated: 2024/06/05 06:22:45 by iassil           ###   ########.fr       */
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