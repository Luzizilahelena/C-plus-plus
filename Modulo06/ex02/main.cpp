/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 10:34:42 by lnzila            #+#    #+#             */
/*   Updated: 2025/06/09 10:36:01 by lnzila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base*	generate()
{
	int	c;

	c = std::rand() % 3;
	switch(c)
	{
		case 0:
			return new A();
		case 1:
			return new B();
		case 2:
			return new C();
		default:
			return (NULL);

	}
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void	identify(Base& p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
	 	std::cout << "A" << std::endl;
	    	return ;
	}
	catch (...)
	{}
	try
	{
	    	(void)dynamic_cast<B&>(p);
	    	std::cout << "B" << std::endl;
	    	return ;
    	}
    	catch (...)
    	{}
    	try
    	{
		(void)dynamic_cast<C&>(p);
	    	std::cout << "C" << std::endl;
	    	return ;
    	}
    	catch (...)
    	{
		std::cerr << "Erro: Tipo desconhecido!" << std::endl;
    	}
}

int	main() 
{
	std::srand(static_cast<unsigned int>(std::time(NULL)));

	Base* instance = generate();
	identify(instance);
	identify(*instance);

	delete instance;
	return 0;
}
