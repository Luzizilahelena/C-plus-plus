/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzila <lnzila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 18:24:30 by lnzila            #+#    #+#             */
/*   Updated: 2025/05/27 18:41:06 by lnzila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : nome("Padrão"), grade(150)
{
    std::cout << "Construtor padrão chamado " << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade1) : nome(name), grade(grade1)
{
    std::cout << "Construtor " << name << " com grau" << grade1 << " chamado" << "\n";
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : nome(other.nome), grade(other.grade)
{
    std::cout << "Construtor de cópia chamado" << std::endl;
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
const std::string& Bureaucrat::getName() const
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
