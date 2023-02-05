/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:43:14 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/05 16:46:29 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"
# include "Cat.hpp"
# include "Dog.hpp"

int main()
{
	//const Animal* meta = new Animal();
	const Animal* Puppy = new Dog();
	const Animal* Passy = new Cat();
	const Animal* Wassy = Puppy;
	std::cout << Puppy->getType() << " : ";
	Puppy->makeSound();
	std::cout << Passy->getType() << " : ";
	Passy->makeSound();
	std::cout << Wassy->getType() << " : ";
	Wassy->makeSound();
	//meta->makeSound();
	

	//delete meta;
	delete Puppy;
	delete Passy;
	return 0;
}