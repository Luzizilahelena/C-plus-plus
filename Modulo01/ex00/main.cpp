/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzila <lnzila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 09:30:39 by lnzila            #+#    #+#             */
/*   Updated: 2025/04/21 08:16:30 by lnzila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int ac, char *av[])
{
	(void)av;
	if (ac != 1)
	{
		std::cerr << "Error! Run the program using only ./BraiiiiiiinnnzzzZ" << std::endl;
		return (1);
	}
	
	randomChump("stack");

	Zombie	*heap = newZombie("heap");
	delete	heap;

	return (0);
}
