/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzila <lnzila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 08:30:52 by lnzila            #+#    #+#             */
/*   Updated: 2025/05/27 10:54:32 by lnzila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : nome("Padrão"), grade_ass(150), grade_exec(150), indicador(false)
{
    std::cout << "Construtor padrão chamado" << std::endl;
}

Form::Form(const std::string& name, int grade_ass, int grade_exec) : nome(name), grade_ass(grade_ass), grade_exec(grade_exec), indicador(false)
{
    if (grade_ass < 1)
        throw Form::GradeTooHighException("grade too high");
    if (grade_ass > 150)
        throw Form::GradeTooLowException("grade too low");
    if (grade_exec < 1)
        throw Form::GradeTooHighException("grade too high");
    if (grade_exec > 150)
        throw Form::GradeTooLowException("grade too low");

}
Form::Form(const Form& other) : nome(other.nome), grade_ass(other.grade_ass), grade_exec(other.grade_exec), indicador(false)
{
    std::cout << "Construtor de cópia chamado" << std::endl;
}

Form& Form::operator=(const Form& other)
{
    std::cout << "Operador de atribuição por cópia chamado" << std::endl;
    (void)other;
    return (*this);
}

Form::~Form()
{
    std::cout << "Destrutor chamado" << std::endl;
}

std::string Form::getName() const
{
    return (nome);
}

int Form::getGrade_ass() const
{
    return (grade_ass);
}

int Form::getGrade_exec() const
{
    return (grade_exec);
}
bool Form::is_signed() const
{
    return (indicador);
}
void    Form::beSigned(const Bureaucrat& sig)
{

    if (sig.getGrade() <= grade_ass)
        indicador = true;
    else
        throw  GradeTooLowException(sig.getName() +" couldn't sign " + nome + " because "+ "the grade is too low");

}

Form::GradeTooHighException::GradeTooHighException(std::string mensagem) : mensagens(mensagem)
{}
Form::GradeTooHighException::~GradeTooHighException() throw()
{}

const char* Form::GradeTooHighException::what() const throw()
{
    return (mensagens.c_str());
}
Form::GradeTooLowException::~GradeTooLowException() throw()
{}

Form::GradeTooLowException::GradeTooLowException(std::string sms) : msg(sms)
{}

const char* Form::GradeTooLowException::what() const throw()
{
    return (msg.c_str());
}

std::ostream& operator<<(std::ostream& out, const Form& b)
{
    out << "Form " << b.getName() <<  "\n" << " grade to sign " << b.getGrade_ass() << "\n" << " grade to execute " << b.getGrade_exec() << "\n";
    if (b.is_signed() == true)
        out << "O Formulário está assinado" << "\n";
    else
        out << "Não está assinado" << "\n";
    return (out);
}
