/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:43:14 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/04 17:28:31 by ratinhosujo      ###   ########.fr       */
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
	std::cout << Puppy->getType() << " : ";
	Puppy->makeSound();
	std::cout << Passy->getType() << " : ";
	Passy->makeSound();
	std::cout << "meta" << " : ";
	//meta->makeSound();
	

	//delete meta;
	delete Puppy;
	delete Passy;
	return 0;
}