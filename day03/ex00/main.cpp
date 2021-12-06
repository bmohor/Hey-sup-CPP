#include "ClapTrap.hpp"

int main() {
	ClapTrap mirage("Mirage");
	mirage.takeDamage(20);
	mirage.attack("Wraith");
	mirage.beRepaired(100);
	mirage.attack("Wraith");
	return 0;
}
