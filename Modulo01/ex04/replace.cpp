/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzila <lnzila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 11:45:46 by lnzila            #+#    #+#             */
/*   Updated: 2025/04/21 08:33:07 by lnzila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex04.hpp"

void	replace(std::ifstream &ficheiro, std::ofstream &replace_file, char *s1, char *s2)
{
	size_t		line_pos;
	size_t		temp_pos;
	std::string	linha;
	std::string	temp;
	
	while (std::getline(ficheiro, temp))
	{
		temp.push_back('\n');
		linha.append(temp);
	}
	if (linha.find(s1) == std::string::npos)
	{
		replace_file << linha;
		return ;
	}
	while (1)
	{
		line_pos = linha.find(s1);
		if (line_pos == std::string::npos)
			break ;
		temp = linha.substr(0, (line_pos + strlen(s1)));
		linha.erase(0, temp.size());
		temp_pos = temp.find(s1);
		temp.erase(temp_pos, strlen(s1));
		temp.insert(temp_pos, s2);
		replace_file << temp;
	}
	replace_file << linha;
	ficheiro.close();
	replace_file.close();
}
