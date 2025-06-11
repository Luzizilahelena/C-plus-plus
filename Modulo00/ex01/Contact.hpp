/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 18:44:16 by lnzila            #+#    #+#             */
/*   Updated: 2025/01/14 18:44:31 by lnzila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
#include <algorithm>
#include <cctype>

class	Contact
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone;
		std::string	secret;
	public:
		std::string	getter(int i);
		void	setter(std::string letra, int j);		
};

std::string	getter(int i);
void		setter(std::string letra, int j);

#endif
