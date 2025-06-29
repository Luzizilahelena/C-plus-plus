/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzila <lnzila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 10:16:30 by lnzila            #+#    #+#             */
/*   Updated: 2025/05/05 12:13:50 by lnzila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class   Animal
{
    protected:
        std::string type;
    
    public:
        Animal();
        Animal(std::string type);
        Animal(const Animal& other);
        Animal& operator=(const Animal& other);
        virtual ~Animal();

        virtual void makeSound() const;
        std::string getType() const;
        void    setType(const std::string& type);
};

#endif