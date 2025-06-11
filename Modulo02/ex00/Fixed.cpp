/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzila <lnzila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 11:48:50 by lnzila            #+#    #+#             */
/*   Updated: 2025/04/29 17:32:21 by lnzila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : valor(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const Fixed& other) : valor(other.valor)
{
	std::cout << "Copy constructor called" << std::endl;
	valor = other.getRawBits();
}

Fixed& Fixed::operator = (const Fixed& other)
{
	std::cout <<"Copy assignment operator called" << std::endl;
	if (this != &other)
		valor = other.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout <<  "Destructor called" << std::endl;
}

int	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (valor);
}

void	Fixed:: setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	valor = raw;
}
