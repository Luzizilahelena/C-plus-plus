#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main(int ac, char **av)
{
	(void)av;
	if (ac != 1)
	{
		std::cerr << "Não recebe nenhum argumento" << std::endl;
		return 1;
	}
	PhoneBook	telefone;
	std::string	linha;
	while(1)
	{
		std::cout << "Insira um comando: " << std::endl;
		std::getline(std::cin, linha);
		if (linha.compare("ADD") == 0)
		{
			Contact	num;
			ADD(num);
			adicionar(num, telefone);
		}
		else if (linha.compare("SEARCH") == 0)
			imprimir(telefone);
		else if (linha.compare("EXIT") == 0)
			break ;
	}
	return 0;
}
