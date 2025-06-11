/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 11:53:28 by lnzila            #+#    #+#             */
/*   Updated: 2025/01/08 12:39:09 by lnzila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char	maiuscula(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

int	main(int ac, char **av)
{
	int 	i;
	int	j;

	i = 0;
	if (ac == 1)
		 std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		i = 1;
		while (i < ac)
		{
			j = 0;
			while (av[i][j])
			{
				std::cout << maiuscula(av[i][j]);
				j++;
			}
			if (i < ac - 1)
				std::cout << " ";
			i++;
		}	
		std::cout << std::endl;
	}
	return 0;
}
