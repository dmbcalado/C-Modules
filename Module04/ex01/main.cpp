/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:43:14 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/04 17:22:12 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"
# include "Cat.hpp"
# include "Dog.hpp"

int main()
{
	int N = 10;
	const Animal **Vet = new const Animal*[10];
	for (int i = 0; i < N ; i++) {
		if (i % 2) {
			Vet[i] = new Dog();
		}
		else {
			Vet[i] = new Cat();
		}
		std::cout << std::endl;
	}
	for (int i = 0; i < N ; i++) {
		Vet[i]->makeSound();
	}
	std::cout <<std::endl;
	for (int i = 0; i < 10 ; i++) {
		delete Vet[i];
		std::cout << std::endl;
	}
	delete[] Vet;
	return 0;
}
