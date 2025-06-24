/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzila <lnzila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 10:55:03 by lnzila            #+#    #+#             */
/*   Updated: 2025/04/21 08:25:14 by lnzila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name): nome(name), arm(NULL) {}

void	HumanB::setWeapon(Weapon &arm)
{
	this->arm = &arm;
}

void	HumanB::attack(void) const
{
	if (arm)
		std::cout << nome << " ataca com seus " << arm->getType() << std::endl;
	else
		std::cout << nome << " Não tem arma para atacar" << std::endl;
}
