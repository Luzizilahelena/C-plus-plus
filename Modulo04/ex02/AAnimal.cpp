/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzila <lnzila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 10:16:37 by lnzila            #+#    #+#             */
/*   Updated: 2025/05/07 08:31:23 by lnzila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : type("Animal")
{
    std::cout << "Construtor padrão de animal  abstrato criado" << std::endl;
}

AAnimal::AAnimal(std::string type) : type(type)
{
    std::cout << "Construtor " << type <<  " criado" << std::endl;
}

AAnimal::AAnimal(const AAnimal& other)
{
    *this = other;
    std::cout << "Construtor de cópia Animal Abstrato chamado" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& other)
{
    std::cout << "Operador de atribuição por cópia Animal Abstrato chamado" << std::endl;
    if (this != &other)
        type = other.type;
    return (*this);
}

AAnimal::~AAnimal()
{
    std::cout << "Destrutor padrão\n";
}
std::string AAnimal::getType() const
{
    return (type);
}

void AAnimal::setType(const std::string& t)
{
    type = t;
}

void AAnimal::makeSound() const
{
    std::cout << "Som genérco de animal" << std::endl;
}