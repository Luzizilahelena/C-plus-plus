/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 08:35:03 by lnzila            #+#    #+#             */
/*   Updated: 2025/06/04 08:47:05 by lnzila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Literal.hpp"
#include "ScalarConvert.hpp"

void	print_char(double valor)
{
	std::cout << "char: ";
	if (std::isnan(valor) ||  valor < 0 ||  valor > 127)
		std::cout << "impossible" << std::endl;
	else if (!std::isprint(static_cast<char>(valor)))
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << static_cast<char>(valor) << "'" << std::endl;
}

void	print_int(double valor)
{
	std::cout << "int: ";
	if (std::isnan(valor) ||
		valor < std::numeric_limits<int>::min() ||
		valor > std::numeric_limits<int>::max())
	{
		std::cout << "impossible" << std::endl;
	}
	else
		std::cout << static_cast<int>(valor) << std::endl;
}

void	print_float(double valor)
{
	std::cout << "float: ";
	std::cout << std::fixed << std::setprecision(1)
	<< static_cast<float>(valor) << "f" <<  std::endl;
}

void	print_double(double valor)
{
	std::cout << "double: ";
	std::cout << std::fixed << std::setprecision(1) << valor << std::endl;
}
