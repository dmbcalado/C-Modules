
#ifndef ANIMALCLASS_HPP
# define ANIMALCLASS_HPP

# include <unistd.h>
# include <string>
# include <cstring>
# include <cstdlib>
# include <fstream>
# include <iostream>
# include <bits/stdc++.h>

class Animal {

public:
	// Default Constructor
	Animal();
	// Parameterized Constructor
	Animal(std::string type);
	// Member functions of Animal
	virtual void	makeSound() const; // !virtual!
	std::string	getType() const;
	// Default Destructor
	~Animal();

protected:
	std::string type;

} ;

// virtual -> Lets you overload function in derived classes.

class WrongAnimal {

public:
	// Default Constructor
	WrongAnimal();
	// Parameterized Constructor
	WrongAnimal(std::string type);
	// Member functions of Animal
	void	makeSound() const; // !virtual!
	std::string	getType() const;
	// Default Destructor
	~WrongAnimal();

protected:
	std::string type;

} ;
#endif