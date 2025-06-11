/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzila <lnzila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 08:25:52 by lnzila            #+#    #+#             */
/*   Updated: 2025/05/27 09:57:02 by lnzila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <exception>
# include <iostream>
# include <string>
# include <fstream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
  private:
	const std::string nome;
	const int grade_ass;
	const int grade_exec;
	bool indicador;

  public:
	AForm();
	AForm(const std::string &name, int grade_ass, int grade_exec);
	AForm(const AForm &other);
	AForm &operator=(const AForm &other);
	virtual ~AForm();

    bool is_signed() const;
    std::string getName() const;
    int getGrade_ass() const;
    int getGrade_exec() const;
    void    beSigned(const Bureaucrat& sig);
	virtual void execute(Bureaucrat const & executor) const = 0;

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

	class FormNotSignedException : public std::exception 
	{
		public:
			virtual const char* what() const throw();
	};
	
};

std::ostream& operator<<(std::ostream& out, const AForm& b);

#endif
