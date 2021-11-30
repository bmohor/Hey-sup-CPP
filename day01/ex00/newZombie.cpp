#include "Zombie.hpp"

Zombie* newZombie( std::string name ) {
	Zombie *n = new Zombie;
	n->setter(name);
	return n;
}
