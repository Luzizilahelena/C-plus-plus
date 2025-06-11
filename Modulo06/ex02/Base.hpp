/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 15:26:47 by lnzila            #+#    #+#             */
/*   Updated: 2025/06/05 15:31:10 by lnzila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BASE_HPP
#define BASE_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

class	Base
{
	public:
		virtual ~Base();
};

class	A : public Base
{};

class	B : public Base
{};

class	C : public Base
{};


#endif
