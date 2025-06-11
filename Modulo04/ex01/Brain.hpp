/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzila <lnzila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 13:43:59 by lnzila            #+#    #+#             */
/*   Updated: 2025/05/05 15:19:57 by lnzila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include "Animal.hpp"
#include <string>

class Brain
{
    private:
        std::string ideas[100];
    
    public:
        Brain();
        Brain(std::string type);
        Brain(const Brain& other);
        Brain& operator=(const Brain& other);
        ~Brain();

        void    setIdea(int indice, const std::string& idea);
        std::string getIdea(int indice) const;
};

#endif
