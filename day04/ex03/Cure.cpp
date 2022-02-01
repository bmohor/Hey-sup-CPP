#include "Cure.hpp"

AMateria*	Cure::clone() const {
	AMateria* newCure = new Cure(*this);
	return newCure;
}

void		Cure::use(ICharacter& target) {
	std::cout << "* heals " +  target.getName() + "’s wounds *" << std::endl;
}
