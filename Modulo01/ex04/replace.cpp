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

void	replace(std::ifstream &file, std::ofstream &replace_file, char *s1, char *s2)
{
	size_t		line_pos;
	size_t		tmp_pos;
	std::string	line;
	std::string	tmp;
	
	while (std::getline(file, tmp))
	{
		tmp.push_back('\n');
		line.append(tmp);
	}
	if (line.find(s1) == std::string::npos)
	{
		replace_file << line;
		return ;
	}
	while (1)
	{
		line_pos = line.find(s1);
		if (line_pos == std::string::npos)
			break ;
		tmp = line.substr(0, (line_pos + strlen(s1)));
		line.erase(0, tmp.size());
		tmp_pos = tmp.find(s1);
		tmp.erase(tmp_pos, strlen(s1));
		tmp.insert(tmp_pos, s2);
		replace_file << tmp;
	}
	replace_file << line;
	file.close();
	replace_file.close();
}
