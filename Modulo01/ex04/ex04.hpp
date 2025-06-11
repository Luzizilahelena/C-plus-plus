/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzila <lnzila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 11:45:31 by lnzila            #+#    #+#             */
/*   Updated: 2025/04/21 08:32:39 by lnzila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX04_HPP
# define EX04_HPP

#include <iostream>
#include <fstream>
#include <cstring>
#include <string>

void	replace(std::ifstream &file, std::ofstream &replace_file, char *s1, char *s2);
void	open_replace_file(std::ofstream &replace_file, char *filename);
void	check_file(std::ifstream &file, char *filename);
void	check_args(int ac, char **av);

#endif
