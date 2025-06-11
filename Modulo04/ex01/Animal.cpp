/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzila <lnzila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 10:16:37 by lnzila            #+#    #+#             */
/*   Updated: 2025/05/05 13:40:40 by lnzila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
    std::cout << "Construtor padrão de Animal criado" << std::endl;
}

Animal::Animal(std::string type) : type(type)
{
    std::cout << "Construtor " << type <<  " criado" << std::endl;
}

Animal::Animal(const Animal& other)
{
    *this = other;
    std::cout << "Construtor de cópia Animal chamado" << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
    std::cout << "Operador de atribuição por cópia Animal chamado" << std::endl;
    if (this != &other)
        type = other.type;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Destrutor padrão de Animal\n";
}
std::string Animal::getType() const
{
    return (type);
}

void Animal::setType(const std::string& t)
{
    type = t;
}

void Animal::makeSound() const
{
    std::cout << "Som genérco de Animal" << std::endl;
}