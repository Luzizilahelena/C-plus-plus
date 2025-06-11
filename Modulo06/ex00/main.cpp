/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzila <lnzila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 21:46:18 by lnzila            #+#    #+#             */
/*   Updated: 2025/05/29 10:38:57 by lnzila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConvert.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cerr << "use: ./convert <literal>\n";
        return (1);
    }
    ScalarConvert::convert(av[1]);
    return (0);
}
