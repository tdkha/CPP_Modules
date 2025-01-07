/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 13:04:56 by ktieu             #+#    #+#             */
/*   Updated: 2025/01/07 15:25:44 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;

	std::cout << "-----------------------------" << std::endl;

	std::cout << "Parameterized constructor" << std::endl;

	const Animal* dog = new Dog("Husky");
	const Animal* cat = new Cat("British Shorthair");
	
	dog->makeSound();
	cat->makeSound();

	delete dog;
	delete cat;

	std::cout << "-----------------------------" << std::endl;
	std::cout << "Wrong Animal constructor" << std::endl;

	const WrongAnimal* wrongAnimal1 = new WrongAnimal();
	const WrongAnimal* wrongAnimal2 = new WrongCat("Tiger");
	
	wrongAnimal1->makeSound();
	wrongAnimal2->makeSound();

	delete wrongAnimal1;
	delete wrongAnimal2;

}
