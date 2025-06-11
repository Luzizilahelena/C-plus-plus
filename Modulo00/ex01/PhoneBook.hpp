/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 18:44:46 by lnzila            #+#    #+#             */
/*   Updated: 2025/01/14 18:44:48 by lnzila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	public:
		PhoneBook();
		Contact	contacto[8];
		int	i;
		int	j;
};

void	ADD(Contact &nome);
void	adicionar(Contact &num, PhoneBook &telefone);
void	imprimir(PhoneBook &telefone);

#endif
