#include "Ice.hpp"

AMateria*	Ice::clone() const {
	AMateria* newIce = new Ice(*this);
	return newIce;
}

void		Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " + target.getName() + " *" << std::endl;
}
