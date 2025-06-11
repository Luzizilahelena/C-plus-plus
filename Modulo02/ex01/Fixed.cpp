/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzila <lnzila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 09:06:48 by lnzila            #+#    #+#             */
/*   Updated: 2025/04/28 09:23:40 by lnzila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : valor(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int valor1) : valor(valor1 << bit)
{
	std::cout << "Int constructor called" << std::endl;
}
Fixed::Fixed(const float valor2) : valor(roundf(valor2 * (1 << bit)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) : valor(other.valor)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator = (const Fixed& other)
{
	std::cout <<"Copy assignment operator called" << std::endl;
	if (this != &other)
		valor = other.valor;
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (valor);
}

void Fixed::setRawBits(const int raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	valor = raw;
}
float Fixed::toFloat() const
{
	return (static_cast<float>(valor) / (1 << bit));
}

int Fixed::toInt() const
{
	return (valor >> bit);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}
