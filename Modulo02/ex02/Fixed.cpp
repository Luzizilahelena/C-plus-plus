/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzila <lnzila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 10:30:48 by lnzila            #+#    #+#             */
/*   Updated: 2025/04/29 08:24:32 by lnzila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : valor(0)
{
	return ;
}

Fixed::Fixed(const int valor1) : valor(valor1 << bit)
{
	return ;
}

Fixed::Fixed(const float valor2) : valor(roundf(valor2 * (1 << bit)))
{
	return ;
}

Fixed::Fixed(const Fixed &other)
{
	this->valor = other.valor;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	if (this != &other)
		valor = other.valor;
	return (*this);
}

Fixed::~Fixed()
{
	return ;
}

int Fixed::getRawBits() const
{
	return (valor);
}

void Fixed::setRawBits(const int raw)
{
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

bool Fixed::operator>(const Fixed &other) const
{
	return (valor > other.valor);
}

bool Fixed::operator<(const Fixed &other) const
{
	return (valor < other.valor);
}

bool Fixed::operator>=(const Fixed &other) const
{
	return (valor >= other.valor);
}

bool Fixed::operator<=(const Fixed &other) const
{
	return (valor <= other.valor);
}

bool Fixed::operator==(const Fixed &other) const
{
	return (valor == other.valor);
}

bool Fixed::operator!=(const Fixed &other) const
{
	return (valor != other.valor);
}

// Operadores aritméticos
Fixed Fixed::operator+(const Fixed &other) const
{
	Fixed result;
	result.valor = valor + other.valor;
	return (result);
}

Fixed Fixed::operator-(const Fixed &other) const
{
	Fixed result;
	result.valor = valor - other.valor;
	return (result);
}

Fixed Fixed::operator*(const Fixed &other) const
{
	Fixed result;
	//this->valor = ((valor) * (other.valor) >> bit); 
	result.valor = (valor * other.valor) / (1 << bit);
	return (result);
}

Fixed Fixed::operator/(const Fixed &other) const
{
	Fixed result;
	result.valor = (valor * other.valor) / (1 << bit);
	return (result);
}

// Operadores de incremento/decremento
Fixed& Fixed::operator++()
{
	valor += 1;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	valor += 1;
	return (temp);
}

Fixed &Fixed::operator--()
{
	valor -= 1;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	valor -= 1;
	return (temp);
}

// Funções estáticas
Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a.valor < b.valor)
		return (a);
	else
		return (b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.valor < b.valor)
		return (a);
	else
		return (b);
}

Fixed &Fixed::max(Fixed& a, Fixed& b)
{
	if (a.valor < b.valor)
		return (a);
	else
		return (b);
}

const Fixed &Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a.valor > b.valor)
		return (a);
	else
		return (b);
}

// Sobrecarga do operador << (de ex01)
std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return (out);
}
