#include "Contact.hpp"

std::string	Contact::getter(int i)
{
	if (i == 1)
		return this->first_name;
	else if (i == 2)
		return this->last_name;
	else if (i == 3)
		return this->nickname;
	else if (i == 4)
		return this->phone;
	else if (i == 5)
		return this->secret;
	return "";
}

void	Contact::setter(std::string letra, int j)
{
	if (j == 1)
		this->first_name =  letra;
	else if (j == 2)
		this->last_name = letra;
	else if (j == 3)
		this->nickname = letra;
	else if (j == 4)
		this->phone = letra;
	else if (j == 5)
		this->secret = letra;
}
