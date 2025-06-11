/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzila <lnzila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 08:26:42 by lnzila            #+#    #+#             */
/*   Updated: 2025/05/27 09:55:55 by lnzila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Intern.hpp"
#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Intern someRandomIntern;

        /* Teste:  para criar ShrubberyCreationForm*/
        AForm *form1 = someRandomIntern.makeForm("shrubbery creation", "Arvore");
        std::cout << "Formulário criado: " << form1->getName() << std::endl;
        delete form1;

        /* Teste: para criar RobotomyRequestForm*/
        AForm *form2 = someRandomIntern.makeForm("robotomy request", "Bender");
        std::cout << "Formulário criado: " << form2->getName() << std::endl;
        delete form2;

        /* Teste:  para criar PresidentialPardonForm*/
        AForm *form3 = someRandomIntern.makeForm("presidential pardon", "Inocente");
        std::cout << "Formulário criado: " << form3->getName() << std::endl;
        delete form3;

        /* Teste: formulário desconhecido (deve lançar exceção)*/
        AForm *form4 = someRandomIntern.makeForm("formulário inválido", "X");
        delete form4;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Erro: " << e.what() << std::endl;
    }

    return 0;
}
