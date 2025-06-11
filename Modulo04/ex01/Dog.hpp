/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzila <lnzila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 10:29:25 by lnzila            #+#    #+#             */
/*   Updated: 2025/05/05 15:07:33 by lnzila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class   Dog : public Animal
{
    private:
        Brain *brain;

    public:
        Dog();
        Dog (const Dog& other);
        Dog& operator=(const Dog& other);
        ~Dog();

       void makeSound() const;
       void    setIdea(int indice, const std::string& ideia);
        std::string getIdea(int indice) const;
};

#endif