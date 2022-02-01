#include "animal.hpp"
#include "dog.hpp"
#include "cat.hpp"

int main() {
	const Animal* cat = new Cat();
	cat->makeSound();
	// This is not gonna compile: 
	/*{
		const Animal* animal = new Animal();
		animal->makeSound();
		delete animal;
	}*/
	delete cat;
	return 0;
}
