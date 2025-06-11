/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzila <lnzila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 08:53:41 by lnzila            #+#    #+#             */
/*   Updated: 2025/04/21 08:34:05 by lnzila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Error! Run using only ./ex05 <level>" << std::endl;
		return (1);
	}
	Harl	harl;

	harl.complain(*(av + 1));

	std::cerr << "Error! \"" << *(av + 1) << "\" is not a valid level" << std::endl;

	return (1);
}
