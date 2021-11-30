#include "Zombie.hpp"

void randomChump( std::string name ) {
	Zombie tmp;
	tmp.setter(name);
	tmp.announce();
}
