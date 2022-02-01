#pragma once
#include <string>
#include "wrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	public:
		WrongCat();
		~WrongCat();
		WrongCat(WrongCat const &other);
		WrongCat		&operator=(WrongCat const &other);
		void	makeSound() const;
		std::string	getType() const;
	protected:
		std::string type;
};

