#pragma once
#include <string>
#include <iostream>

class WrongAnimal {
	public:
		WrongAnimal();
		~WrongAnimal();
		WrongAnimal(WrongAnimal const &other);
		WrongAnimal		&operator=(WrongAnimal const &other);
		void	makeSound() const;
		std::string	getType() const;
	protected:
		std::string type;
};

