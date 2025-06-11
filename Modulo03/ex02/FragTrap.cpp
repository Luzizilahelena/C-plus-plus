/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzila <lnzila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 14:59:25 by lnzila            #+#    #+#             */
/*   Updated: 2025/05/03 17:57:03 by lnzila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string nome1) : ClapTrap(nome1)
{
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "FragTrap " << nome << " nasce (versão especializada do ClapTrap)!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << nome << " foi criado!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << nome << " pede um high five" << std::endl;
}
