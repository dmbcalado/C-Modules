/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 19:19:10 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/18 19:52:56 by dmendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The trick in this Base is using static_cast<int> template.

#include "Base.hpp"

int	timer = 0;

A::A() : Base("A") {
	std::cout << "Default A Constructor called." << std::endl;
}

A::~A() {
		std::cout << "A Destructor called." << std::endl;
}

B::B() : Base("B") {
	std::cout << "Default B Constructor called." << std::endl;
}

B::~B() {
		std::cout << "B Destructor called." << std::endl;
}

C::C() : Base("C") {
	std::cout << "Default C Constructor called." << std::endl;
}

C::~C() {
		std::cout << "C Destructor called." << std::endl;
}

Base::Base()
{
	std::cout << "Base Constructor called." << std::endl;
}

Base::Base(std::string arg)
{
	type = arg;
	std::cout << "Base Constructor called." << std::endl;
}

Base::~Base()
{
	std::cout << "Base Destructor called." << std::endl;
}

Base::Base(const Base &original)
{
	this->type = original.type;
	std::cout << "Base Copy Constructor called." << std::endl;
}

Base &Base::operator=(const Base &original)
{
	this->type = original.type;
	return (*this);
	std::cout << "Base Copy Assigment operator called" << std::endl;
}

std::string	Base::getType() {
	return (type);
}

Base *generate(void) {
	Base * ptr;

	if (timer == 0) {
		srand(time(NULL));
		timer++;
	}
	int random_nbr = rand() % 3 + 1;
	switch (random_nbr)
	{
		case 1:
			ptr = new A();
			break;
		case 2:
			ptr = new B();
			break;
		case 3:
			ptr = new C();
			break;
	}
	usleep(1);
	return (ptr);
}

void	identify(Base *p){
	try {
		A* a = dynamic_cast<A*>(p);
		if (a)
			std::cout << "Its an A class." << std::endl;
	}
	catch (std::exception &error) {}
	try {
		B* b = dynamic_cast<B*>(p);
		if (b)
			std::cout << "Its a B class." << std::endl;
	}
	catch (std::exception &error) {}
	try {
		C* c = dynamic_cast<C*>(p);
		if (c)
			std::cout << "Its a C class." << std::endl;
	}
	catch (std::exception &error) {}

}

void	identify(Base& p)
{
	identify(&p);
}
