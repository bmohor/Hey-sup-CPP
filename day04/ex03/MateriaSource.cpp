#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++)
		storage[i] = nullptr;
}

MateriaSource::MateriaSource(const MateriaSource & other) {
	*this = other;
}

MateriaSource& MateriaSource::operator=(const MateriaSource &other)
{
	for (int i = 0; i < 4; i++) {
		if (storage[i])
			delete storage[i];
		if (other.storage[i])
			storage[i] = other.storage[i]->clone();
		else
			storage[i] = nullptr;
	}
	return *this;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++) {
			delete storage[i];
	}
}

void MateriaSource::learnMateria(AMateria* newMateria) {
	for (int i = 0; i < 4; i++) {
		if (!storage[i]) {
			storage[i] = newMateria;
			break ;
		}	
	}
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	int i = 0;
	while (storage[i] && i < 4)
	{
		if (this->storage[i]->getType() == type)
			return storage[i]->clone();
		i++;
	}
	return nullptr;	
}
