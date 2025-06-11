/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzila <lnzila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 08:30:52 by lnzila            #+#    #+#             */
/*   Updated: 2025/05/27 10:32:21 by lnzila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : nome("Padrão"), grade_ass(150), grade_exec(150), indicador(false)
{
    std::cout << "Construtor padrão chamado" << std::endl;
}

AForm::AForm(const std::string& name, int grade_ass, int grade_exec) : nome(name), grade_ass(grade_ass), grade_exec(grade_exec), indicador(false)
{
    if (grade_ass < 1)
        throw AForm::GradeTooHighException("grade too high");
    if (grade_ass > 150)
        throw AForm::GradeTooLowException("grade too low");
    if (grade_exec < 1)
        throw AForm::GradeTooHighException("grade too high");
    if (grade_exec > 150)
        throw AForm::GradeTooLowException("grade too low");

}
AForm::AForm(const AForm& other) : nome(other.nome), grade_ass(other.grade_ass), grade_exec(other.grade_exec), indicador(false)
{
    std::cout << "Construtor de cópia" << std::endl;
}

AForm& AForm::operator=(const AForm& other)
{
    std::cout << "Operador de atribuição por cópia chamado" << std::endl;
    (void)other;
    return (*this);
}

AForm::~AForm()
{
    std::cout << "Destrutor chamado" << std::endl;
}

std::string AForm::getName() const
{
    return (nome);
}

int AForm::getGrade_ass() const
{
    return (grade_ass);
}

int AForm::getGrade_exec() const
{
    return (grade_exec);
}
bool AForm::is_signed() const
{
    return (indicador);
}
void    AForm::beSigned(const Bureaucrat& sig)
{

    if (sig.getGrade() <= grade_ass)
        indicador = true;
    else
        throw  GradeTooLowException(sig.getName() +" couldn't sign " + nome + " because "+ "the grade is too low");

}

AForm::GradeTooHighException::GradeTooHighException(std::string mensagem) : mensagens(mensagem)
{}
AForm::GradeTooHighException::~GradeTooHighException() throw()
{}

const char* AForm::GradeTooHighException::what() const throw()
{
    return (mensagens.c_str());
}
AForm::GradeTooLowException::~GradeTooLowException() throw()
{}

AForm::GradeTooLowException::GradeTooLowException(std::string sms) : msg(sms)
{}

const char* AForm::GradeTooLowException::what() const throw()
{
    return (msg.c_str());
}

const char* AForm::FormNotSignedException::what() const throw()
{
    return ("Form is not signed!");
}

std::ostream& operator<<(std::ostream& out, const AForm& b)
{
    out << "Form " << b.getName() <<  "\n" << " grade to sign " << b.getGrade_ass() << "\n" << " grade to execute " << b.getGrade_exec() << "\n";
    if (b.is_signed() == true)
        out << "O Formulário está assinado" << "\n";
    else
        out << "Não está assinado" << "\n";
    return (out);
}
