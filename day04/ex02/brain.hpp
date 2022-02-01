#pragma once
#include <string>
#include <iostream>

class Brain {
	public:
		Brain();
		~Brain();
		Brain(Brain const &other);
		Brain		&operator=(Brain const &other);
	protected:
		std::string ideas[100];
};

