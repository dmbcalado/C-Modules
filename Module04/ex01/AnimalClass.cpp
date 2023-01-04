
#include "AnimalClass.hpp"

// ------------- Constructor and Destructor -------------

Brain::Brain() {
	std::string	temp = "idea";
	ideas = new std::string[100];
	for(int i = 0; i < 100; i++) {
		ideas[i] = temp;
	}
	std::cout << "The brain was created" << std::endl;
}

Brain::~Brain() {
	delete[] ideas;
	std::cout << "The brain was destroyed." << std::endl;
}

Animal::Animal() {
	std::cout << "Animal Class created." << std::endl;
}

Animal::Animal(std::string name_type) {
	type = name_type;
	std::cout << type << " Class created." ;
	std::cout << std::endl;
}

Animal::~Animal(){
	std::cout << "Animal Class destroyed.";
	std::cout << std::endl;
}

void	Animal::makeSound() const {
	std::cout << std::endl;
}

std::string	Animal::getType() const {
	if (!type.empty()){
		return type;
	}
	else{
		return "";
	}
}

WrongAnimal::WrongAnimal() {
	std::cout << " Wrong Animal Class created." << std::endl;
}

WrongAnimal::WrongAnimal(std::string name_type) {
	type = name_type;
	std::cout << type << " Class created." ;
	std::cout << std::endl;
}

WrongAnimal::~WrongAnimal(){
	std::cout << "Wrong Animal Class destroyed.";
	std::cout << std::endl;
}

void	WrongAnimal::makeSound() const {
	std::cout << " * piupius * " << std::endl;
}

std::string	WrongAnimal::getType() const {
	if (!type.empty()){
		return type;
	}
	else{
		return "";
	}
}