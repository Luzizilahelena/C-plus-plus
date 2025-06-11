/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzila <lnzila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 10:16:34 by lnzila            #+#    #+#             */
/*   Updated: 2025/05/07 08:43:29 by lnzila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int	main(void)
{
	// const AAnimal *meta = new Animal();
	const AAnimal *j = new Dog();
	const AAnimal *i = new Cat();
	const WrongAnimal *wrongAnimal = new WrongAnimal;
	const WrongCat  *wrongCat = new WrongCat;

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	std::cout << wrongAnimal->getType() << std::endl;
	std::cout << wrongCat->getType() << std::endl;

	i->makeSound(); // will output the cat sound!
	j->makeSound();
	//meta->makeSound();
	wrongAnimal->makeSound();
	wrongCat->makeSound();

	delete wrongAnimal;
	delete wrongCat;
	return (0);
}