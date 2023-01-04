
#include "Animals.hpp"

// ------------- Constructors and Destructors -------------

Dog::Dog() : Animal::Animal("Dog") {
	std::cout << "A lovely dog has born." ;
	std::cout << std::endl;
}

Dog::~Dog(){
	std::cout << "The dog died from old age. RIP.";
	std::cout << std::endl;
}

Cat::Cat() : Animal::Animal("Cat") {
	std::cout << "A lovely cat has born." ;
	std::cout << std::endl;
}

Cat::~Cat(){
	std::cout << "A cat died from old age.";
	std::cout << std::endl;
}

WrongCat::WrongCat() : WrongAnimal::WrongAnimal("Wrong Cat") {
	std::cout << "A wrong cat has born." ;
	std::cout << std::endl;
}

WrongCat::~WrongCat(){
	std::cout << "A wrong cat died from cancer.";
	std::cout << std::endl;
}

// make_Sound() Overloads

void	Dog::makeSound() const {
	std::cout << " * barks * "<<std::endl;
}

void	Cat::makeSound() const {
	std::cout << " * miaus * "<<std::endl;
}

void	WrongCat::makeSound() const {
	std::cout << " * wrong miaus * "<< std::endl;
}