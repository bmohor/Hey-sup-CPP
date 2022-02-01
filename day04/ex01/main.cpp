#include "animal.hpp"
#include "dog.hpp"
#include "cat.hpp"

int main() {
	const Animal* animal[10];
	for (int i = 0; i < 10; i++) {
		if (i < 5)
			animal[i] = new Cat();
		else
			animal[i] = new Dog();
	}
	for (int i = 0; i < 10; i++)
		delete animal[i];
	return 0;
}
