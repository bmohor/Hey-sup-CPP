#include "wrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << "    WrongCat constructor called." << std::endl;
	type = "Issa WrongCat!";
}

WrongCat::~WrongCat() {
	std::cout << "    WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &other) {
	*this = other;
}

WrongCat &WrongCat::operator=(WrongCat const &other) {
	if (this == &other)
		return *this;
	type = other.type;
	return *this;
}

void WrongCat::makeSound() const {
	std::cout << "    Meow-Meow" << std::endl;
}

std::string	WrongCat::getType() const {
	return type;
}
