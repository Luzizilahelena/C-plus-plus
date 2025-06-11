/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzila <lnzila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 08:26:42 by lnzila            #+#    #+#             */
/*   Updated: 2025/05/28 12:42:08 by lnzila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    try {
        Bureaucrat boss("Boss ", 1);
        Bureaucrat intern("Intern ", 150);
        Bureaucrat middle("Middle ", 50);

        std::cout << "\n--- Criando formulários ---\n";
        ShrubberyCreationForm shrub("Arvore");
        RobotomyRequestForm robot("Robô ");
        PresidentialPardonForm pardon("Culpado ");

        std::cout << "\n--- Tentando assinar os formulários ---\n";
        intern.signForm(shrub); // deve falhar
        boss.signForm(shrub);   // deve funcionar

        boss.signForm(robot);
        boss.signForm(pardon);

        std::cout << "\n--- Tentando executar com permissões diferentes ---\n";
        intern.executeForm(shrub); // deve lançar exceção
        middle.executeForm(shrub); // deve funcionar (grade 50 é suficiente)

        boss.executeForm(robot);   // sucesso (aleatório)
        boss.executeForm(pardon);  // sucesso

    } catch (const std::exception& e) {
        std::cerr << "Erro: " << e.what() << std::endl;
    }

    return 0;
}
