/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzila <lnzila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 08:49:33 by lnzila            #+#    #+#             */
/*   Updated: 2025/04/21 08:22:35 by lnzila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

int	main(int ac, char **av)
{
	(void)av;
	if (ac != 1)
	{
		std::cout << "Entrada inválida, use: ./brain" << std::endl;
		return (1);
	}
	
	std::string	string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << std::setw(20) << "The memory address of the string is " << &string << std::endl;
	std::cout << std::setw(40) << "The memory address held by stringPTR is " << stringPTR << std::endl;
	std::cout << std::setw(40) << "The memory address held by stringREF is " << &stringREF << std::endl;
	std::cout << std::setw(20) << "The value of the string is " << string << std::endl;
	std::cout << std::setw(20) << "The value pointed to by stringPTR is " << *stringPTR << std::endl;
	std::cout << std::setw(20) << "The value pointed to by stringREF is " << stringREF << std::endl;
	
	return (0);
}
