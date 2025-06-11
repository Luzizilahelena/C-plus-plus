/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzila <lnzila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 10:33:02 by lnzila            #+#    #+#             */
/*   Updated: 2025/05/05 15:08:24 by lnzila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat() : Animal("Cat"), brain(new Brain())
{
	std::cout << "Construtor Padrão de Cat chamado" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other), brain(new Brain(*other.brain))
{
	std::cout << "Construtor de cópia Cat chamado" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Operador de atribuição por cópia  Cat chamado" << std::endl;
	if (this != &other)
	{
		type = other.type;
		*brain = *other.brain;
	}
	return (*this);
}

Cat::~Cat()
{
	delete	brain;

	std::cout << "Destrutor de Cat chamado" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Som de Cat: miau" << std::endl;
}

void Cat::setIdea(int indice, const std::string &idea)
{
	brain->setIdea(indice, idea);
}

std::string Cat::getIdea(int indice) const
{
	return (brain->getIdea(indice));
}
