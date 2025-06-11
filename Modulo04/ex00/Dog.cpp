/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzila <lnzila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 10:43:18 by lnzila            #+#    #+#             */
/*   Updated: 2025/05/05 12:19:39 by lnzila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Construtor padrão de Dog criado" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
    std::cout << "Construtor de cópia Dog chamado" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Operador de atribuição por cópia chamado" << std::endl;
    if (this != &other)
        type = other.type;
    return (*this);
}
Dog::~Dog()
{
    std::cout << "Destrutor de Dog chamado" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Som de DOG: au au" << std::endl;
}
