#pragma once
#include <iostream>
#include "Character.hpp"
class ICharacter;

class AMateria {
	protected:
		std::string type;
	public:
		AMateria() {};
		~AMateria() {};
		AMateria(AMateria const& other) { *this = other; };
		AMateria(std::string const& type) { this->type = type; };
		AMateria &operator=(AMateria const& other) { type = other.type; return *this;};
		std::string const& getType() const { return this->type; };
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target) { (void)target; };
};
