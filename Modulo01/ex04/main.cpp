/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzila <lnzila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:23:35 by lnzila            #+#    #+#             */
/*   Updated: 2025/04/21 08:32:37 by lnzila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex04.hpp"

int	main(int ac, char **av)
{
	std::ifstream	file;
	std::ofstream	replace_file;

	check_args(ac, av);
	check_file(file, *(av + 1));
	open_replace_file(replace_file, *(av + 1));
	replace(file, replace_file, *(av + 2), *(av + 3));

	return (0);
}
