/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzila <lnzila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 11:45:39 by lnzila            #+#    #+#             */
/*   Updated: 2025/04/21 08:32:55 by lnzila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex04.hpp"

void	open_replace_file(std::ofstream &replace_file, char *filename)
{
	std::string	replace_filename;
	
	replace_filename = std::string(filename) + ".replace";
	replace_file.open(replace_filename);
	if (!replace_file.is_open())
	{
		std::cerr << "Error: Failed to open " << replace_filename << std::endl;
		exit(1);
	}
}
