#pragma once
#include <string>
#include <iostream>

class Zombie {
	public:
		Zombie() {};
		~Zombie();
		void setter(std::string set);
		void announce( void );
	private:
		std::string name;
};

Zombie*	ZombieHorde(int N, std::string name);
