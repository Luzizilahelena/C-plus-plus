/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzila <lnzila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 11:44:27 by lnzila            #+#    #+#             */
/*   Updated: 2025/05/03 17:57:10 by lnzila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("DefaultScav ")
{
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "ScavTrap construtor padrão criado" << std::endl;
}

ScavTrap::ScavTrap(const std::string& nome) : ClapTrap(nome)
{
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "ScavTrap " << nome << " criado" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
    std::cout << "ScavTrap copiado de " << other.nome << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    ClapTrap::operator=(other);
    std::cout << "ScavTrap operador de atribuição de cópia" << std::endl;
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << nome << " destruído" << std::endl;
}

void    ScavTrap:: attack(const std::string& target)
{
    if (energyPoints <= 0 || hitPoints <= 0)
    {
        std::cout << "ScavTrap " << nome << " Não tem energia ou está morto e não pode atacar" << std::endl;
        return ;
    }
    energyPoints--;
    std::cout << "ScavTrap " << nome  << " ataca ferozmente" << target 
                << ", causando " << attackDamage <<  "pontos de dano!\n";
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << nome << "Agora está no modo Gate Keeper!" << std::endl;
}