/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzila <lnzila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 15:00:21 by lnzila            #+#    #+#             */
/*   Updated: 2025/05/03 17:53:08 by lnzila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap frag("Fragger");
	frag.attack("a villain");
	frag.takeDamage(50);
	frag.beRepaired(30);
	frag.highFivesGuys();
	return (0);
}
