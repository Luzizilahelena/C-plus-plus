/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 15:23:41 by lnzila            #+#    #+#             */
/*   Updated: 2025/06/05 15:42:38 by lnzila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Serializer.hpp"

int	main()
{
	Data*	data = new Data();
	uintptr_t	serialized;
	Data*	deserialized;
	
	data->valor = 20;
	data->fixo = 20.9f;
	data->str = "Luzi";
	
	std::cout << "ANTES DA SERIALIZAÇÃO/DESERIALIZAÇÃO\n";
	std::cout << "valor: " << data->valor << std::endl;
	std::cout << "float: " << data->fixo << std::endl;
	std::cout << "str: " << data->str << std::endl;
	std::cout << "\n";
	
	serialized = Serializer::serialize(data);
	deserialized = Serializer::deserialize(serialized);
	if (deserialized == data)
	{
		std::cout << "serialização/deserialização bem-sucedida!" << std::endl;
		std::cout << "Valor: " << deserialized->valor << std::endl;
		std::cout << "Float: " << deserialized->fixo << std::endl;
		std::cout << "str: " << deserialized->str << std::endl;
	}
	else
	{
		std::cout << "Error: ";
		std::cout << "ponteiros diferentes mesmo depois da serialização/deserialização" << std::endl;
	}
}
