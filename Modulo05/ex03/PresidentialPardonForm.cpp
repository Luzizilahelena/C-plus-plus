/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzila <lnzila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 12:54:37 by lnzila            #+#    #+#             */
/*   Updated: 2025/05/27 10:25:57 by lnzila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), target("Padrão")
{
    std::cout << "Construtor padrão chamado" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : AForm("PresidentialPardonForm", 25, 5), target(target)
{
    std::cout << "Construtor " << target << " chamado" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) :  AForm(other), target(other.target)
{
    std::cout << "Construtor de cópia chamado" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
    std::cout << "Operador de atribuição por cópia chamado" << std::endl;
    if (this != &other)
        AForm::operator=(other);
    return (*this);
}

PresidentialPardonForm:: ~PresidentialPardonForm()
{
    std::cout << "Destrutor chamado" << std::endl;
}

void    PresidentialPardonForm::execute(Bureaucrat const& executor) const
{
    if (!is_signed())
        throw GradeTooLowException("a nota do executor é muito baixa para poder executar esse formulário");
    if (executor.getGrade() > getGrade_exec())
        throw GradeTooLowException("a nota do executor é muito baixa para poder executar esse formulário");
    std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}