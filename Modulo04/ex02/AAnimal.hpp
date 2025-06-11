/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzila <lnzila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 10:16:30 by lnzila            #+#    #+#             */
/*   Updated: 2025/05/07 08:30:30 by lnzila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>
#include <string>

class   AAnimal
{
    protected:
        std::string type;
    
    public:
        AAnimal();
        AAnimal(std::string type);
        AAnimal(const AAnimal& other);
        AAnimal& operator=(const AAnimal& other);
        virtual ~AAnimal();

        virtual void makeSound() const = 0;
        std::string getType() const;
        void    setType(const std::string& type);
};

#endif