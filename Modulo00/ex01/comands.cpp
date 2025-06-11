#include "PhoneBook.hpp"
#include "Contact.hpp"

void	ADD(Contact &nome)
{
	std::string	linha;

	std::cout << "Insira o primeiro nome: " << std::endl;
	std::getline(std::cin, linha);
	if (std::all_of(linha.begin(), linha.end(), [](unsigned char c) { return std::isalpha(c); }))
		nome.setter(linha, 1);
	else
	{
		std::cerr << "O primeiro nome deve ser composto apenas por letras" << std::endl;
		return ;
	}
	std::cout << "Insira o último  nome: " << std::endl;
	std::getline(std::cin, linha);
	if (std::all_of(linha.begin(), linha.end(), [](unsigned char c) { return std::isalpha(c); }))
		nome.setter(linha, 2);
	else
	{
		std::cerr << "O sobre_nome nome deve ser composto apenas por letras" << std::endl;
		return ;
	}
	std::cout << "Insira o apelido: " << std::endl;
	std::getline(std::cin, linha);
	if (std::all_of(linha.begin(), linha.end(), [](unsigned char c) { return std::isalpha(c); }))
		nome.setter(linha, 3);
	else
	{
		std::cerr << "O apelido nome deve ser composto apenas por letras" << std::endl;
		return ;
	}
	std::cout << "Insira o número de telefone: " << std::endl;
	std::getline(std::cin, linha);
	if (std::all_of(linha.begin(), linha.end(), [](unsigned char c) { return std::isdigit(c); }))
		nome.setter(linha, 4);
	else
	{
		std::cerr << "O número de telefone deve ser composto apenas por números inteiros" << std::endl;
		return ;
	}
	std::cout << "Insira o segredo mais obscuro: " << std::endl;
	std::getline(std::cin, linha);
	if (std::all_of(linha.begin(), linha.end(), [](unsigned char c) { return std::isalpha(c); }))
		nome.setter(linha, 5);
	else
	{
		std::cerr << "O segredo  nome deve ser composto apenas por letras" << std::endl;
		return ;
	}
}

void	adicionar(Contact &num, PhoneBook &telefone)
{
	if (telefone.i < 8)
	{
		if (telefone.i == 7)
			telefone.j = 0;
		telefone.contacto[telefone.i] = num;
		telefone.i++;
	}
	else
	{
		telefone.contacto[telefone.j] = num;
		if (telefone.j == 7)
			telefone.j = 0;
		telefone.j++;
	}
}
