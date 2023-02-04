
#include "Brain.hpp"
#include "Animal.hpp"

// ------------- Constructor and Destructor -------------
Animal::Animal() {
	
	std::cout << "Animal Class created." << std::endl;
}

Animal::Animal(std::string name_type) {
	type = name_type;
	std::cout << "Animal Class created." ;
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
