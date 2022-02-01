#include "animal.hpp"
#include "dog.hpp"
#include "cat.hpp"
#include "wrongAnimal.hpp"
#include "wrongCat.hpp"

int main() {
	std::cout << std::endl << "Right implementation: " << std::endl;
	{
		const Animal* animal = new Animal();
		const Animal* dog = new Dog();
		const Animal* cat = new Cat();
		std::cout << "    " << dog->getType() << " " << std::endl;
		std::cout << "    " << cat->getType() << " " << std::endl;
		std::cout << "    " << animal->getType() << " " << std::endl;
		dog->makeSound();
		cat->makeSound();
		animal->makeSound();
		delete animal;
		delete dog;
		delete cat;
	}
	std::cout << std::endl << "Wrong implementation: " << std::endl;
	{
		const WrongAnimal* wrongAnimal = new WrongAnimal();
		const WrongAnimal* wrongCat = new WrongCat();
		std::cout << "    " << wrongCat->getType() << " " << std::endl;
		std::cout << "    " << wrongAnimal->getType() << " " << std::endl;
		wrongCat->makeSound();
		wrongAnimal->makeSound();
		delete wrongAnimal;
		delete wrongCat;
	}
	return 0;
}
