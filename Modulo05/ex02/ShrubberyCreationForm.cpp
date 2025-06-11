/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzila <lnzila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 12:50:14 by lnzila            #+#    #+#             */
/*   Updated: 2025/05/28 12:41:12 by lnzila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), target("default")
{
    std::cout << "Construtor padrão chamado" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : AForm("ShrubberyCreationForm", 145, 137), target(target)
{
    std::cout << "Construtor " << target << " chamado" << std::endl;
} 

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm(other), target(other.target)
{
    std::cout << "Construtor de cópia chamado" << std::endl;
}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
    std::cout << "Operador de atribuição por cópia chamado" << std::endl;
    if (this != &other)
    {
        AForm::operator=(other);
        this->target = other.target;
    }
return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "Destrutor chamado" << std::endl;
}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
    if (!is_signed())
        throw FormNotSignedException();
    if (executor.getGrade() > getGrade_exec())
        throw GradeTooLowException("Grau muito baixo para executar este formulário");
    std::ofstream file((target + "_shrubbery").c_str());
    if (!file)
    {
        std::cerr << "Erro ao criar o arquivo." << std::endl;
        return ;
    }
    file << "       |\n";
    file << "      |||\n";
    file << "    |||||||\n";
    file << "   |||||||||\n";
    file << "  |||||||||||\n";
    file << " |||||||||||||\n";
    file << "       |||       \n";
    file << "       |||       \n";
    file.close();

}
