#include "wrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "    WrongAnimal constructor called." << std::endl;
	type = "Default";
}

WrongAnimal::~WrongAnimal() {
	std::cout << "    WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &other) {
	*this = other;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &other) {
	if (this == &other)
		return *this;
	type = other.type;
	return *this;
}

void WrongAnimal::makeSound() const {
	std::cout << "    brrr...." << std::endl;
}

std::string WrongAnimal::getType() const {
	return type;
}
