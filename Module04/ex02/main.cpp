
# include "Animals.hpp"

int main()
{
	const Animal **Vet = new const Animal*[10];
	for (int i = 0; i < 10 ; i++) {
		if (i % 2) {
			Vet[i] = new Dog();
		}
		else {
			Vet[i] = new Cat();
		}
		std::cout << std::endl;
	}
	for (int i = 0; i < 10 ; i++) {
		delete Vet[i];
		std::cout << std::endl;
	}
	delete[] Vet;
	//const Animal* meta = new Animal();
	//delete meta;
	return 0;
}

/* int main()
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
 */