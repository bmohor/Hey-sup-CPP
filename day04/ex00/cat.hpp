#pragma once
#include <string>
#include "animal.hpp"

class Cat : public Animal {
	public:
		Cat();
		virtual ~Cat();
		Cat(Cat const &other);
		Cat		&operator=(Cat const &other);
		virtual void	makeSound() const;
		virtual std::string	getType() const;
	protected:
		std::string type;
};

