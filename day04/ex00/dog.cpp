#include "dog.hpp"

Dog::Dog() {
	std::cout << "    Dog constructor called." << std::endl;
	type = "Issa Dog!!";
}

Dog::~Dog() {
	std::cout << "    Dog destructor called" << std::endl;
}

Dog::Dog(Dog const &other) {
	*this = other;
}

Dog &Dog::operator=(Dog const &other) {
	if (this == &other)
		return *this;
	type = other.type;
	return *this;
}

void Dog::makeSound() const {
	std::cout << "    Waf-Waf" << std::endl;
}

std::string	Dog::getType() const {
	return type;
}
