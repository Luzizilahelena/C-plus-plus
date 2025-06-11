/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzila <lnzila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 13:05:25 by lnzila            #+#    #+#             */
/*   Updated: 2025/05/03 17:48:24 by lnzila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : nome("Default"), hitPoints(10), energyPoints(10), attackDamage(0)
{

    std::cout << "ClapTrap foi criado" << std::endl;
}

ClapTrap::ClapTrap(std::string nome) : nome(nome), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "ClapTrap " << nome << "foi criado" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    *this = other;
    std::cout << "ClapTrap construtor de cópia chamado" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    if (this != &other)
    {
        nome = other.nome;
        hitPoints = other.hitPoints;
        energyPoints = other.energyPoints;
        attackDamage = other.attackDamage;
    }
std::cout << "ClapTrap operador de atribuição de cópia chamado\n" << std::endl;
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << nome << "Foi destruído" << std::endl;;
}

void    ClapTrap::attack(const std::string& target)
{
    if (energyPoints <= 0 || hitPoints <= 0)
    {
        std::cout << "ClapTrap " << nome << "Não tem energia ou está morto e não pode atacar\n";
        return ;
    }
    energyPoints--;
    std::cout << "ClapTrap " << nome << "ataca " << target
                << ", causando " << attackDamage << " pontos de dano!\n";
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    hitPoints -= amount;
    if (hitPoints < 0)
        hitPoints = 0;
    std::cout  << "ClapTrap " << nome << "sofre " << amount << " pontos de danos"
                << " .Restantes HP: " << hitPoints << std::endl;
}


void    ClapTrap::beRepaired(unsigned int amount)
{
    if (energyPoints <= 0 || hitPoints <= 0)
    {
        std::cout << "ClapTrap " << nome << " Não tem energia ou está morto e não pode se reparar" << std::endl;
        return ;
    }
    energyPoints--;
    hitPoints += amount;
    std::cout << "ClapTrap " << nome << " Se repara para " << amount
                << " pontos de vida. Atual HP: " << hitPoints << std::endl;
}