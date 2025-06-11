/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzila <lnzila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 10:55:20 by lnzila            #+#    #+#             */
/*   Updated: 2025/04/21 08:25:39 by lnzila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): type(type) {}

const	std::string	&Weapon::getType(void)
{
	return (type);
}

void	Weapon::setType(std::string newtype)
{
	type = newtype;
}
