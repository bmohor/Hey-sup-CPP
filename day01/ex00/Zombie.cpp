#include "Zombie.hpp"

void Zombie::setter(std::string set) {
	name = set;
}

void Zombie::announce( void ) {
	std::cout << name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie() {
	announce();
}
