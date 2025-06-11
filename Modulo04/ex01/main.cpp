/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzila <lnzila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 10:16:34 by lnzila            #+#    #+#             */
/*   Updated: 2025/05/05 16:20:55 by lnzila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main() {
    const int N = 4;
    Animal* animals[N];

    for (int i = 0; i < N; ++i) {
        if (i < N / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    std::cout << "--- Deleting animals ---" << std::endl;
    for (int i = 0; i < N; ++i)
        delete animals[i];

    std::cout << "--- Testing deep copy ---" << std::endl;
    Dog original;
    original.setIdea(0, "Chase the cat");

    Dog copy = original;
    original.setIdea(0, "Eat food");

    std::cout << "Original idea: " << original.getIdea(0) << std::endl;
    std::cout << "Copy idea: " << copy.getIdea(0) << std::endl;

    return 0;
}
