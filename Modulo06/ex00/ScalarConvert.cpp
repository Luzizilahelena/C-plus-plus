/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzila <lnzila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 21:20:30 by lnzila            #+#    #+#             */
/*   Updated: 2025/06/04 08:50:40 by lnzila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConvert.hpp"

void    ScalarConvert::convert(const std::string& literal)
{
    double valor;

    if (para_char(literal))
        valor = static_cast<double>(literal[1]);
    else if (para_int(literal))
        valor = std::strtof(literal.c_str(), NULL);
    else if (para_float(literal))
        valor = std::strtof(literal.c_str(), NULL);
    else if (para_double(literal))
        valor = std::strtod(literal.c_str(), NULL);
    else
    {
        std::cerr << "Entrada inválida" << std::endl;
        return ;
    }
    print_char(valor);
    print_int(valor);
    print_float(valor);
    print_double(valor);
}
