/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzila <lnzila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 10:29:25 by lnzila            #+#    #+#             */
/*   Updated: 2025/05/05 11:51:53 by lnzila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class   Dog : public Animal
{
    public:
        Dog();
        Dog (const Dog& other);
        Dog& operator=(const Dog& other);
        ~Dog();

       void makeSound() const;
};

#endif