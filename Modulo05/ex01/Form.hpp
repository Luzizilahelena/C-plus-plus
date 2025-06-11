/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzila <lnzila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 08:25:52 by lnzila            #+#    #+#             */
/*   Updated: 2025/05/22 16:43:53 by lnzila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <exception>
# include <iostream>
# include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
  private:
	const std::string nome;
	const int grade_ass;
	const int grade_exec;
	bool indicador;

  public:
	Form();
	Form(const std::string &name, int grade_ass, int grade_exec);
	Form(const Form &other);
	Form &operator=(const Form &other);
	~Form();
    bool is_signed() const;
    std::string getName() const;
    int getGrade_ass() const;
    int getGrade_exec() const;
    void    beSigned(const Bureaucrat& sig);

	class GradeTooLowException : public std::exception
	{
        private:
            std::string msg;
		public:
            GradeTooLowException(std::string sms);
            virtual ~GradeTooLowException() throw();
		    const char *what() const throw();
	};

	class GradeTooHighException : public std::exception
	{
        private:
            std::string mensagens;

		public:
            GradeTooHighException(std::string mensagem);
            virtual ~GradeTooHighException() throw();
		    const char *what() const throw();
	};
};

std::ostream& operator<<(std::ostream& out, const Form& b);

#endif