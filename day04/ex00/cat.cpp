#include "cat.hpp"

Cat::Cat() {
	std::cout << "    Cat constructor called." << std::endl;
	type = "Issa Cat!";
}

Cat::~Cat() {
	std::cout << "    Cat destructor called" << std::endl;
}

Cat::Cat(Cat const &other) {
	*this = other;
}

Cat &Cat::operator=(Cat const &other) {
	if (this == &other)
		return *this;
	type = other.type;
	return *this;
}

void Cat::makeSound() const {
	std::cout << "    Meow-Meow" << std::endl;
}

std::string	Cat::getType() const {
	return type;
}
