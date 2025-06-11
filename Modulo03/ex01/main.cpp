/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzila <lnzila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 14:07:55 by lnzila            #+#    #+#             */
/*   Updated: 2025/05/03 17:32:49 by lnzila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
    ClapTrap basic("CL4P-TP ");
    ScavTrap advanced("SC4V-TP ");

    std::cout << "\n--- Testing ClapTrap ---\n";
    basic.attack("a rock");
    basic.takeDamage(5);
    basic.beRepaired(3);

    std::cout << "\n--- Testing ScavTrap ---\n";
    advanced.attack("a cactus");
    advanced.takeDamage(20);
    advanced.beRepaired(10);
    advanced.guardGate();

    std::cout << "\n--- Copy and Assignment Tests ---\n";
    ScavTrap copy(advanced);
    ScavTrap assigned;
    assigned = advanced;

    return 0;
}