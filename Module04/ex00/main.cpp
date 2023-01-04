
# include "Animals.hpp"

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
