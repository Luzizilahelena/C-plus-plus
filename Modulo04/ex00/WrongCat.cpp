/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzila <lnzila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 12:27:13 by lnzila            #+#    #+#             */
/*   Updated: 2025/05/05 13:34:50 by lnzila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << "Construtor de WrongCat criado" << std::endl;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type)
{
    std::cout << "Construtor " << type << " criado" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
    std::cout << "Construtor de cópia WrongCat chamado" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
    if (this != &other)
        type = other.type;
    return (*this);
}

WrongCat:: ~WrongCat()
{
    std::cout << "Destrutor de  WrongCat chamado" << std::endl;
}

void    WrongCat::makeSound() const
{
    std::cout << "Som de WrongCat: miau" << std::endl;
}

std::string WrongCat::getType() const
{
    std::cout << "Função getType chamada" << std::endl;
    return (type);
}

