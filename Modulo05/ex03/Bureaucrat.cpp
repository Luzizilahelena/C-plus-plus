/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzila <lnzila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 08:04:41 by lnzila            #+#    #+#             */
/*   Updated: 2025/05/27 10:36:55 by lnzila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : nome("Padrão"), grade(150)
{
    std::cout << "Construtor padrão chamado" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade1) : nome(name), grade(grade1)
{
    std::cout << "Construtor " << name << "Com grau " << grade1 << " chamado" << "\n";
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : nome(other.nome), grade(other.grade)
{
    std::cout << "Construtor de cópia chamado" <<  std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
    std::cout << "Operador de atribuição por cópia chamado" << std::endl;
    if (this != &other)
        grade = other.grade;
    return (*this);
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destrutor chamado" << std::endl;
}

const   std::string& Bureaucrat::getName() const
{
    return (nome);
}

int Bureaucrat::getGrade() const
{
    return (grade);
}

void    Bureaucrat::incrementGrade()
{
    if (grade <= 1)
        throw GradeTooHighException();
    grade--;
}

void    Bureaucrat::decrementGrade()
{
    if (grade >= 150)
        throw GradeTooLowException();
    grade++;
}

void    Bureaucrat::signForm(AForm& formulario) const
{
    try
    {
        formulario.beSigned(*this);
        std::cout << nome << "signed" << formulario.getName() << std::endl;
    }
    catch(AForm::GradeTooLowException& x)
    {
        std::cerr << x.what() << std::endl;
    }
}

void    Bureaucrat::executeForm(AForm const &form) const
{
    try
    {
        form.execute(*this);
        std::cout << nome << "executed " << form.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << nome << " Não pode executar " << form.getName() <<
        "porque " << e.what() << std::endl;
    }
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grau muito alto!");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grau muito baixo!");
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& b)
{
    out << b.getName() << ", bureaucrat grade " << b.getGrade();
    return (out);
}
