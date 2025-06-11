/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzila <lnzila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 10:33:02 by lnzila            #+#    #+#             */
/*   Updated: 2025/05/07 08:28:14 by lnzila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "AAnimal.hpp"

Cat::Cat() : AAnimal("Cat")
{
    std::cout << "Construtor Padrão de Cat chamado" << std::endl;
}

Cat::Cat(const Cat& other) : AAnimal(other)
{
    std::cout << "Construtor de cópia Cat chamado" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Operador de atribuição por cópia  Cat chamado" << std::endl;
    if (this != &other)
        type = other.type;
    return (*this); 
}

Cat::~Cat()
{
    std::cout << "Destrutor de Cat chamado" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Som de Cat: miau" << std::endl;
}