/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzila <lnzila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 14:00:29 by lnzila            #+#    #+#             */
/*   Updated: 2025/05/03 16:50:34 by lnzila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap robot("Bot42 ");
	ClapTrap luz(robot);
	ClapTrap opeluz;

    opeluz = robot;
    ClapTrap defaultRobot;

	robot.attack("a tree");
	robot.takeDamage(3);
	robot.beRepaired(5);
	robot.takeDamage(-11);
	robot.attack("another tree");
	robot.beRepaired(2);

	return (0);
}
