#include "ScavTrap.hpp"

int main() {
	ClapTrap mirage("Mirage");
	mirage.takeDamage(20);
	mirage.attack("Wraith");
	mirage.beRepaired(100);
	mirage.attack("Wraith");	
	std::cout << std::endl;
	ScavTrap Rampart("Rampart");
	Rampart.takeDamage(100);
	Rampart.attack("Loba");
	Rampart.beRepaired(100);
	Rampart.attack("Loba");
	return 0;
}
