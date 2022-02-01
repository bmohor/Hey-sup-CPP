#include "brain.hpp"

Brain::Brain() {
	std::cout << "    Brain constructor called." << std::endl;
}

Brain::~Brain() {
	std::cout << "    Brain destructor called" << std::endl;
}

Brain::Brain(Brain const &other) {
	*this = other;
}

Brain &Brain::operator=(Brain const &other) {
	if (this == &other)
		return *this;
	for (int i = 0; i < 100; i++)
		ideas[i] = other.ideas[i];
	return *this;
}

