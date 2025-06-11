/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzila <lnzila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 13:43:38 by lnzila            #+#    #+#             */
/*   Updated: 2025/05/05 15:24:57 by lnzila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Construtor Brain chamado" << std::endl;
}

Brain::Brain(const Brain& other)
{
    int i;

    i = 0;
    std::cout << "Construtor de cópia Brain chamado" << std::endl;
    while (i < 100)
    {
        ideas[i] = other.ideas[i];
        i++;
    }
}

Brain& Brain::operator=(const Brain& other)
{
    int i = 0;

    std::cout << "OPerador de atribuição por cópia  Brain chamado" << std::endl;
    if (this != &other)
    {
        while (i < 100)
        {
            ideas[i] = other.ideas[i];
            i++;
        }
    }
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Destrutor Brain chamado" << std::endl;
}

std::string   Brain::getIdea(int indice) const
{
    if (indice >= 0 && indice < 100)
        return (ideas[indice]);
    return ("");
}

void Brain::setIdea(int indice, const std::string& idea)
{
    if (indice >= 0 && indice < 100)
        ideas[indice] = idea;
}

