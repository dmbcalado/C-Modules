/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:10:11 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/04 16:10:38 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* Puppy = new Dog();
	const Animal* Passy = new Cat();
	const WrongAnimal * Wassy = new WrongCat();
	std::cout << Puppy->getType() << " : ";
	Puppy->makeSound();
	std::cout << Passy->getType() << " : ";
	Passy->makeSound();
	std::cout << Wassy->getType() << " : ";
	Wassy->makeSound();
	std::cout << "meta" << " : ";
	meta->makeSound();
	

	delete meta;
	delete Puppy;
	delete Passy;
	delete Wassy;
	return 0;
}
