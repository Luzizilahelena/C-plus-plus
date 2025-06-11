/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzila <lnzila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 08:56:13 by lnzila            #+#    #+#             */
/*   Updated: 2025/04/21 07:57:32 by lnzila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
  private:
	int valor;
	static const int bit = 8;

  public:
	Fixed();
	Fixed(const int valor1);
	Fixed(const float valor2);
	Fixed(const Fixed &other);
	Fixed &operator=(const Fixed &other);
	~Fixed();

	int	getRawBits() const;
	void	setRawBits(int const raw);
	float	toFloat() const;
	int	toInt() const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif
