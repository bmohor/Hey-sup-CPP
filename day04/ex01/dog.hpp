#pragma once
#include <string>
#include "animal.hpp"
#include "brain.hpp"

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
	private:
		Brain* brain;
};

