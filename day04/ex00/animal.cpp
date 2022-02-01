#include "animal.hpp"

Animal::Animal() {
	std::cout << "    Animal constructor called." << std::endl;
	type = "Default";
}

Animal::~Animal() {
	std::cout << "    Animal destructor called" << std::endl;
}

Animal::Animal(Animal const &other) {
	*this = other;
}

Animal &Animal::operator=(Animal const &other) {
	if (this == &other)
		return *this;
	type = other.type;
	return *this;
}

void Animal::makeSound() const {
	std::cout << "    brrr...." << std::endl;
}

std::string Animal::getType() const {
	return type;
}
