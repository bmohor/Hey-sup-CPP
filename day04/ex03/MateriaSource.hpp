#pragma once
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource {
	public:
		MateriaSource();
		MateriaSource(const MateriaSource & other);
		MateriaSource & operator=(const MateriaSource & other);
		~MateriaSource();
		virtual void learnMateria(AMateria* newMateria);
		virtual AMateria* createMateria(std::string const & type);
	private:
		AMateria* storage[4];
};
