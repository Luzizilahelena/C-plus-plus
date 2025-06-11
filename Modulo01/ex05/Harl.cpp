/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzila <lnzila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 08:53:17 by lnzila            #+#    #+#             */
/*   Updated: 2025/04/21 08:33:47 by lnzila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::complain(std::string level)
{
	int	i;
	typedef	void	(Harl::*HarlPtr)();

	i = -1;
	std::string	tab[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	HarlPtr	ft_ptr_tab[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	while (++i < 4)
	{
		if (level.compare(tab[i]) == 0)
		{
			(this->*ft_ptr_tab[i])();
			exit(0);
		}
	}
}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl << DEBUG;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl << INFO;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl <<  WARNING;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl <<  ERROR;
}
