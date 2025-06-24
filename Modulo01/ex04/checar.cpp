/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzila <lnzila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 11:45:13 by lnzila            #+#    #+#             */
/*   Updated: 2025/04/21 08:31:11 by lnzila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex04.hpp"

void	check_args(const int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Error: Número de parâmetros inválido!" << std::endl;
		exit(1);
	}
	if (av[1][0] == '\0')
	{
		std::cerr << "Error: O nome do arquivo não pode ser uma string vazia" << std::endl;
		exit(1);
	}
	if (av[2][0] == '\0')
	{
		std::cerr << "Error: A string s1 não pode ser uma string vazia" << std::endl;
		exit(1);
	}
}

void	check_file(std::ifstream &ficheiro, char *filename)
{
	ficheiro.open(filename);

	if (!ficheiro.is_open())
	{
		if (errno == ENOENT)
			std::cerr << "Error: O arquivo " << filename << " Não existe" << std::endl;
		else if (errno == EACCES)
			std::cerr << "Error: Não há permissão para abrir o arquivo " << filename << std::endl;
		else
			std::cerr << "Error: Ocorreu um erro ao tentar abrir o arquivo " << filename << std::endl;
		exit(1);
	}
	ficheiro.seekg(0, std::ios::end);
	if (ficheiro.tellg() == 0)
	{
		std::cerr << "Error: O arquivo " << filename << " está vazio" << std::endl;
		ficheiro.close();
		exit(1);
	}
	ficheiro.seekg(0);
}
