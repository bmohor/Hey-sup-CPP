#pragma once
#include "AMateria.hpp"

class Ice : public AMateria {
	public:
		Ice() { type = "ice"; };
		~Ice() {};
		Ice(Ice const& other) { *this = other; };
		Ice &operator=(Ice const& other) { type = other.type; return *this; };
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
	protected:
		std::string type;
};
