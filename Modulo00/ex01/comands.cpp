#include "PhoneBook.hpp"
#include "Contact.hpp"

bool	alpha(const std::string& str)
{
	size_t	i = 0;
	
	if (str.empty())
	{
		return (false);
	}
	while (i < str.length())
	{
		if (!std::isalpha(static_cast<unsigned char>(str[i])))
			return (false);
		i++;
	}
	return true;
}

bool	digits(const std::string& str)
{
	size_t	i = 0;
	
	if (str.empty())
	{
		return (false);
	}
	while (i < str.length())
	{
		if (!std::isdigit(static_cast<unsigned char>(str[i])))
			return (false);
		i++;
	}
	return true;
}

void	ADD(Contact &nome)
{
	std::string linha;
	bool	input_ok = false;

	while (!input_ok)
	{
		std::cout << "Insira o primeiro nome: ";
		if (!std::getline(std::cin, linha))
		{
			std::cerr << "\nEntrada interrompida." << std::endl;
			return ;
		}
		if (alpha(linha))
		{
			nome.setter(linha, 1);
			input_ok = true;
		}
		else
			std::cerr << "ERRO: O primeiro nome deve ser composto apenas por letras." << std::endl;
	}
	input_ok = false;
	while (!input_ok)
	{
		std::cout << "Insira o último nome: ";
		if (!std::getline(std::cin, linha))
		{
			std::cerr << "\nEntrada interrompida." << std::endl;
			return ;
		}
		if (alpha(linha))
		{
			nome.setter(linha, 2);
			input_ok = true;
		}
		else
			std::cerr << "ERRO: O último nome deve ser composto apenas por letras." << std::endl;
	}
	input_ok = false;
	while (!input_ok)
	{
		std::cout << "Insira o apelido: ";
		if (!std::getline(std::cin, linha))
		{
			std::cerr << "\nEntrada interrompida. Cancelando adição de contato." << std::endl;
			return ;
		}
		if (alpha(linha))
		{
			nome.setter(linha, 3);
			input_ok = true;
		}
		else
			std::cerr << "ERRO: O apelido deve ser composto apenas por letras." << std::endl;
	}
	input_ok = false;
	while (!input_ok)
	{
		std::cout << "Insira o número de telefone: ";
		if (!std::getline(std::cin, linha))
		{
			std::cerr << "\nEntrada interrompida. Cancelando adição de contato." << std::endl;
			return ;
		}
		if (digits(linha))
		{
			nome.setter(linha, 4);
			input_ok = true;
        	}
        	else
			std::cerr << "ERRO: O número de telefone deve ser composto apenas por números inteiros." << std::endl;
	}
	input_ok = false;
	while (!input_ok)
	{
		std::cout << "Insira o segredo mais obscuro: ";
		if (!std::getline(std::cin, linha))
		{
			std::cerr << "\nEntrada interrompida. Cancelando adição de contato." << std::endl;
			return ;
		}
		if (alpha(linha))
		{
			nome.setter(linha, 5);
			input_ok = true;
		}
        	else
			std::cerr << "ERRO: O segredo deve ser composto apenas por letras." << std::endl;
	}
	std::cout << "Contato adicionado com sucesso!" << std::endl;
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
		telefone.j++;
		if (telefone.j == 8)
			telefone.j = 0;
   	}
}
