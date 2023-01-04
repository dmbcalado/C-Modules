
#ifndef ANIMALS_HPP
# define ANIMALS_HPP

# include <unistd.h>
# include <string>
# include <cstring>
# include <cstdlib>
# include <fstream>
# include <iostream>
# include <bits/stdc++.h>

# include "AnimalClass.hpp"

class Dog : public Animal {

public:
	Dog();
	void	makeSound() const;
	~Dog();

protected:
	std::string type;

} ;


class Cat : public Animal {

public:
	Cat();
	void	makeSound() const;
	~Cat();

protected:

} ;

class WrongCat : public WrongAnimal {

public:
	WrongCat();
	void	makeSound() const;
	~WrongCat();

protected:

} ;
#endif