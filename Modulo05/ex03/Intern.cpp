/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzila <lnzila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 17:07:44 by lnzila            #+#    #+#             */
/*   Updated: 2025/05/27 10:12:34 by lnzila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Construtor padrão Intern chamado" << std::endl;
}

Intern::Intern(const Intern &other)
{
    std::cout << "Construtor de cópia Intern chamado" << std::endl;
    *this = other;
}

Intern &Intern::operator=(const Intern &other)
{
    std::cout << "Operador de atribuição por cópia Intern chamado" << std::endl;
    (void)other;
    return *this;
}

Intern::~Intern()
{
    std::cout << "Destrutor Intern chamado" << std::endl;
}

AForm *Intern::create_Shrubbery(std::string target)
{
    return new ShrubberyCreationForm(target);
}

AForm *Intern::create_Robotomy(std::string target)
{
    return new RobotomyRequestForm(target);
}

AForm *Intern::create_Presidential(std::string target)
{
    return new PresidentialPardonForm(target);
}

AForm *Intern::makeForm(std::string nome_form, std::string alvo_form)
{
    typedef AForm *(Intern::*CreateFunc)(std::string);

    struct FormMap
    {
        std::string nome;
        CreateFunc creator;
    };

    FormMap formularios[] = {
        {"shrubbery creation", &Intern::create_Shrubbery},
        {"robotomy request", &Intern::create_Robotomy},
        {"presidential pardon", &Intern::create_Presidential}};

    for (int i = 0; i < 3; i++)
    {
        if (nome_form == formularios[i].nome)
        {
            std::cout << "Intern criou " << nome_form << std::endl;
            return (this->*formularios[i].creator)(alvo_form);
        }
    }
    throw std::invalid_argument("Formulário desconhecido: " + nome_form);
}
