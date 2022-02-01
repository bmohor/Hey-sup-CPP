#pragma once
#include <string>
#include "animal.hpp"

class Dog : public Animal {
	public:
		Dog();
		virtual ~Dog();
		Dog(Dog const &other);
		Dog		&operator=(Dog const &other);
		virtual void	makeSound() const;
		virtual std::string	getType() const;
	protected:
		std::string type;
};

