/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzila <lnzila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 21:20:56 by lnzila            #+#    #+#             */
/*   Updated: 2025/05/29 08:26:09 by lnzila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERT_HPP
#define SCALARCONVERT_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <limits>
#include <cmath>
#include <cctype>
#include "Literal.hpp"


class   ScalarConvert
{
    private:
        ScalarConvert();
        ScalarConvert(const ScalarConvert& other);
        ScalarConvert& operator=(const ScalarConvert& other);
        ~ScalarConvert();
    
    public:
        static void convert(const std::string& literal);
};

#endif
