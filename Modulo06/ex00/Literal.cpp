/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Literal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzila <lnzila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 08:17:06 by lnzila            #+#    #+#             */
/*   Updated: 2025/06/04 12:29:13 by lnzila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConvert.hpp"
#include "Literal.hpp"

bool	para_char(const std::string& str)
{
	return (str.length() == 3 && str[0] == '\'' && str[2] == '\'');
}

bool    para_int(const std::string& str)
{
    size_t  i;

    i = 0;
    if (str.empty())
        return (false);
    if (str[0] == '-' || str[0] == '+')
        i = 1;
    while (i < str.size())
    {
        if (!isdigit(str[i]))
            return (false);
        i++;
    }
    return (true);
}

bool    para_float(const std::string& str)
{
    size_t  i;
    bool    ponto;

    i = 0;
    if (str == "-inff" || str == "+inff" || str == "nanf")
        return (true);
    if (str[0] == '-' || str[0] == '+')
        i = 1;
    ponto = false;
    while (i < str.size() - 1)
    {
        if (str[i] == '.')
        {
            if (ponto)
                return (false);
            ponto = true;
        }
        else if (!isdigit(str[i]))
            return (false);
        i++;
    }
    if (str[str.length() - 1] == 'f')
        return (true);
    return (false);
}

bool    para_double(const std::string& str)
{
    size_t  i;
    bool    ponto;

    i = 0;
    if (str == "-inf" || str == "+inf" || str == "nan")
        return (true);
    if (str[0] == '-' || str[0] == '+')
        i = 1;
    ponto = false;
    while (i < str.size())
    {
        if (str[i] == '.')
        {
            if (ponto)
                return (false);
            ponto = true;
        }
        else if (!isdigit(str[i]))
            return (false);
        i++;
    }
    return (true);
}
