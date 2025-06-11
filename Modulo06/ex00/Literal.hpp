/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   literal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 08:30:28 by lnzila            #+#    #+#             */
/*   Updated: 2025/06/04 08:34:43 by lnzila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	LITERAL_HPP
#define	LITERAL_HPP

#include "ScalarConvert.hpp"

bool	para_char(const std::string& str);
bool	para_int(const std::string& str);
bool	para_float(const std::string& str);
bool	para_double(const std::string& str);

void	print_char(double valor);
void	print_int(double valor);
void	print_float(double valor);
void	print_double(double valor);

#endif
