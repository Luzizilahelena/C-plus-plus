/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzila <lnzila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 08:54:27 by lnzila            #+#    #+#             */
/*   Updated: 2025/04/21 08:35:59 by lnzila           ###   ########.fr       */
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
			switch (i)
			{
				case 0:
					(this->*ft_ptr_tab[0])();
					(this->*ft_ptr_tab[1])();
					(this->*ft_ptr_tab[2])();
					(this->*ft_ptr_tab[3])();
					break ;
				case 1:
					(this->*ft_ptr_tab[1])();
					(this->*ft_ptr_tab[2])();
					(this->*ft_ptr_tab[3])();
					break ;
				case 2:
					(this->*ft_ptr_tab[2])();
					(this->*ft_ptr_tab[3])();
					break ;
				case 3:
					(this->*ft_ptr_tab[3])();
					break ;
				default:
					std::cerr << "Error! \"" << level << "\" is not a valid level" << std::endl;
					exit(1);
			}
			exit(0);
		}
	}
}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl << DEBUG << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl << INFO << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl <<  WARNING << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl <<  ERROR << std::endl;
}
