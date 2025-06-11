#include "PhoneBook.hpp"
#include "Contact.hpp"

void	print_truncated(const std::string str)
{
	int	i;
	
	i = -1;
	if (strlen(str.c_str()) > 10)
	{
		while (++i < 9)
			std::cout << str[i];
		std::cout << '.';
	}
	else
		std::cout << std::setw(10) << std::right << str;
}

void	imprimir(PhoneBook &telefone)
{
	std::string	j;
	int	inter;
	int	c;
	
	c = 0;	
	if (telefone.i == 0)
	{
		std::cout << "a lista  está vazia" << std::endl;
		return ;
	}
	std::cout << std::setw(10) << "index" << "|" << std::setw(10) << "first name" << "|" << std::setw(10) << "last name" << "|" << std::setw(10) << "nickname" << std::endl; 
	while(c < telefone.i)
	{
		std::cout << std::setw(10) << c << "|";
		print_truncated(telefone.contacto[c].getter(1));
		std::cout << "|";
		print_truncated(telefone.contacto[c].getter(2));
		std::cout << "|";
		print_truncated(telefone.contacto[c].getter(3));
		std::cout << std::endl;
		c++;
	}
		
	std::cout << "digita o índice do contacto que deseja ver " << std::endl; 
	std::getline(std::cin, j);
	if (std::all_of(j.begin(), j.end(), [](unsigned char c) { return std::isdigit(c); }))
		;
	else
	{
		std::cerr << "O índice deve ser um dígito" << std::endl;
		return ;
	}
	if (j.length() != 1)
	{
		std::cerr << " o índice so pode ter um digito" << std::endl;
		return ;
	}
	inter = std::stoi(j);
	if (inter < 0 || inter > 7)
	{
		std::cerr << "NÃo faz parte do intervalo" << std::endl;
		return ;
	}
	std::cout << "First name: " << telefone.contacto[inter].getter(1) << std::endl;
	std::cout << "Last name: " << telefone.contacto[inter].getter(2) << std::endl;
	std::cout << "Nickname: " << telefone.contacto[inter].getter(3) << std::endl;
	std::cout << "Phone: " << telefone.contacto[inter].getter(4) << std::endl;
	std::cout << "Darkest secret: "<<  telefone.contacto[inter].getter(5) << std::endl;
}
