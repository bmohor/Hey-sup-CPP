#pragma once
#include "AMateria.hpp"

class Cure : public AMateria {
	public:
		Cure() { type = "cure"; };
		~Cure() {};
		Cure(Cure const& other) { *this = other; };
		Cure &operator=(Cure const& other) { type = other.type; return *this; };
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
	protected:
		std::string type;
};

