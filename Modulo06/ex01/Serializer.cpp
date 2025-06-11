/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 11:32:06 by lnzila            #+#    #+#             */
/*   Updated: 2025/06/07 16:01:03 by lnzila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

uintptr_t	Serializer::serialize(Data* ptr)
{
	uintptr_t	valor;
	
	valor = reinterpret_cast<uintptr_t>(ptr);
	return (valor);
}

Data*	Serializer::deserialize(uintptr_t raw)
{
	Data*	ptr;
	
	ptr = reinterpret_cast<Data*>(raw);
	return (ptr);
}
