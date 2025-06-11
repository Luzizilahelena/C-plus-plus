/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzila <lnzila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 10:43:18 by lnzila            #+#    #+#             */
/*   Updated: 2025/05/05 15:04:45 by lnzila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), brain(new Brain())
{
	std::cout << "Construtor padrão de Dog criado" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other), brain(new Brain(*other.brain))
{
	std::cout << "Construtor de cópia Dog chamado" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	std::cout << "Operador de atribuição por cópia chamado" << std::endl;
	if (this != &other)
	{
		type = other.type;
		*brain = *other.brain;
	}
	return (*this);
}
Dog::~Dog()
{
	delete	brain;

	std::cout << "Destrutor de Dog chamado" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Som de DOG: au au" << std::endl;
}

void Dog::setIdea(int indice, const std::string &idea)
{
	brain->setIdea(indice, idea);
}

std::string Dog::getIdea(int indice) const
{
	return (brain->getIdea(indice));
}
