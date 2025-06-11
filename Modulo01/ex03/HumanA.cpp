/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzila <lnzila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 08:50:04 by lnzila            #+#    #+#             */
/*   Updated: 2025/04/21 08:23:00 by lnzila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &arm): name(name), arm(arm) {}

void	HumanA::attack(void)
{
	std::cout << name << " attacks with their " << arm.getType() << std::endl;
}
