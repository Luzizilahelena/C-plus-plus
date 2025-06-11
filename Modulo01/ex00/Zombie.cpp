/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzila <lnzila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 10:49:53 by lnzila            #+#    #+#             */
/*   Updated: 2025/04/21 08:17:27 by lnzila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string str) : nome(str) {}

Zombie::~Zombie(void)
{
	std::cout << nome << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << nome << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
