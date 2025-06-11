/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzila <lnzila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 07:45:27 by lnzila            #+#    #+#             */
/*   Updated: 2025/05/24 16:30:47 by lnzila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>
#include "AForm.hpp"

class AForm;

class   Bureaucrat
{
    private:
        const std::string   nome;
        int grade;
    

    public:
        Bureaucrat();
        Bureaucrat(const std::string name, int grade1);
        Bureaucrat(const Bureaucrat& other);
        Bureaucrat& operator=(const Bureaucrat& other);
        ~Bureaucrat();

        const   std::string& getName() const;
        int getGrade() const;
        void    incrementGrade();
        void    decrementGrade();
        void    signForm(AForm &formulario) const;
        void    executeForm(AForm const &form) const;

        class   GradeTooLowException : public std::exception
        {
            public:
                const char *what() const throw();
        };

        class  GradeTooHighException : public std::exception
        {
            public:
                const char *what() const throw();
        };
};

// overload
std::ostream& operator<<(std::ostream& out, const Bureaucrat& b);

#endif