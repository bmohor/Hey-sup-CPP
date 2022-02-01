#pragma once
#include <string>
#include <iostream>

class Animal {
	public:
		Animal();
		virtual ~Animal();
		Animal(Animal const &other);
		Animal		&operator=(Animal const &other);
		virtual void	makeSound() const;
		virtual std::string	getType() const;
	protected:
		std::string type;
};

