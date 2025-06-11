/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzila <lnzila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 10:29:25 by lnzila            #+#    #+#             */
/*   Updated: 2025/05/07 08:44:16 by lnzila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"

class   Dog : public AAnimal
{
    public:
        Dog();
        Dog (const Dog& other);
        Dog& operator=(const Dog& other);
        ~Dog();

       void makeSound() const;
};

#endif