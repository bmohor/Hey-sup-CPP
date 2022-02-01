#include "Character.hpp"
#include <iostream>

Character::Character() {
	name = "noname";
	for (int i = 0; i < 4; i++)
		fourSizedBag[i] = nullptr;
}

Character::Character(std::string name) {
	this->name = name;
	for (int i = 0; i < 4; i++)
		fourSizedBag[i] = nullptr;
}

Character::Character(const Character & other) {
	*this = other;
}

Character::~Character() {
	for (int i = 0; i < 4; i++) {
		delete fourSizedBag[i];
	}
}

Character& Character::operator=(const Character &other) {
	name = other.getName();
	for (int i = 0; i < 4; i++) {
		if (fourSizedBag[i])
			delete fourSizedBag[i];
		if (other.fourSizedBag[i])
			fourSizedBag[i] = other.fourSizedBag[i]->clone();
		else
			fourSizedBag[i] = nullptr;
	}
	return *this;
}

std::string const & Character::getName() const {
	return name;
}

void	Character::equip(AMateria* m) {
	std::cout << m->getType() << std::endl ;
	for (int i = 0; i < 4; i++) {
		if (!fourSizedBag[i]) {
			fourSizedBag[i] = m;
			break ;
		}
	}
}

void	Character::unequip(int idx) {
	fourSizedBag[idx] = nullptr;
}

void	Character::use(int idx, ICharacter& target) {
	if ((idx <= 0 && idx > 4) || !this->fourSizedBag[idx])
		return;
	else
		fourSizedBag[idx]->use(target);
}
