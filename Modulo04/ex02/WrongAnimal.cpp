/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzila <lnzila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 12:27:18 by lnzila            #+#    #+#             */
/*   Updated: 2025/05/05 13:36:25 by lnzila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
    std::cout << "WrongAnimal padrão chamado" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : type(type)
{
    std::cout << "Construtor " <<  type << " chamado" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
    *this = other;
    std::cout << "Construtor de cópia WrongAnimal chamado" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
    std::cout << "Operador de atribuição por cópia WrongAnimal\n";
    if (this !=  &other)
        type = other.type;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Destrutor Padrão WrongAnimal" << std::endl;
}

std::string WrongAnimal::getType() const
{
    std::cout << "Função getType chamada\n";
    return (type);
}

void WrongAnimal::setType(const std::string& t2)
{
    std::cout << "Função setType\n";
    type = t2;
}

void WrongAnimal::makeSound() const
{
    std::cout << "Som genérico de WrongAnimal" << std::endl;
}