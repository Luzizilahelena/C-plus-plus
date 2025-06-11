/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 11:24:39 by lnzila            #+#    #+#             */
/*   Updated: 2025/06/05 15:21:59 by lnzila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SERIALIZATION_HPP
#define	SERIALIZATION_HPP

#include <iostream>
#include <string>
#include <stdint.h>

struct	Data
{
	int	valor;
	float	fixo;
	std::string	str;
};

class	Serializer
{
	private:
		Serializer();
		Serializer(const Serializer& other);
		Serializer& operator=(const Serializer& other);
		~Serializer();
	
	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif
