/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzila <lnzila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 08:04:49 by lnzila            #+#    #+#             */
/*   Updated: 2025/05/22 12:48:02 by lnzila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Bureaucrat b1("Alice", 2);
		std::cout << b1 << std::endl;
		b1.incrementGrade(); // Vai para 1
		std::cout << b1 << std::endl;
		b1.incrementGrade(); // Vai lançar exceção
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << "Erro: " << e.what() << std::endl;
	}
	std::cout << "-------------------\n";
	try
	{
		Bureaucrat b2("Bob", 151); // Vai lançar exceção
	}
	catch (std::exception &e)
	{
		std::cerr << "Erro ao criar Bob: " << e.what() << std::endl;
	}
	std::cout << "-------------------\n";
	try
	{
		Bureaucrat b3("Carol", 149);
		std::cout << b3 << std::endl;
		b3.decrementGrade(); // Vai para 150
		std::cout << b3 << std::endl;
		b3.decrementGrade(); // Vai lançar exceção
	}
	catch (std::exception &e)
	{
		std::cerr << "Erro: " << e.what() << std::endl;
	}
	return (0);
}
