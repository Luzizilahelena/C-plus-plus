/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzila <lnzila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 08:50:57 by lnzila            #+#    #+#             */
/*   Updated: 2025/04/21 08:25:45 by lnzila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WEAPON_HPP
# define WEAPON_HPP

#include <string>
#include <iostream>

class	Weapon
{
	private:
		std::string	type;
	public:
		Weapon(std::string type);
		const std::string	&getType(void);
		void			setType(std::string newtype);
};

#endif
