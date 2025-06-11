/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzila <lnzila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 12:51:57 by lnzila            #+#    #+#             */
/*   Updated: 2025/05/27 10:25:59 by lnzila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), target("padrão")
{
    std::cout << "Construtor padrão  chamado" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : AForm("RobotomyRequestForm", 72, 45), target(target)
{
    std::cout << "Construtor " << target << " chamado" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : AForm(other), target(other.target)
{
    std::cout << "Construtor de cópia chamado" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
    std::cout << "Operador de atribuição por cópia chamado" << std::endl;
    (void)other;
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Destrutor chamado" << std::endl;
}

void    RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
    if (!is_signed())
        throw FormNotSignedException();
    if (executor.getGrade() > getGrade_exec())
        throw GradeTooLowException("Grau muito baixo para executar o formulário");
    std::cout << "BZZZZZZ... drilling noises..." << std::endl;
    std::srand(std::time(0));
    if (std::rand() % 2)
        std::cout << target << " Foi robotomizado com sucesso!" << std::endl;
    else
        std::cout << "Falha na robotomização de " << target << "." << std::endl;
}
