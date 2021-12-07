#include "DiamondTrap.hpp"

int main() {
/*	ClapTrap mirage("Mirage");
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
	std::cout << std::endl;
	FragTrap Crypto("Crypto");
	Crypto.takeDamage(100);
	Crypto.attack("Ash");
	Crypto.beRepaired(100);
	Crypto.attack("Ash");
*/
	DiamondTrap lf("Lifeline");
	lf.takeDamage(20);
	lf.attack("Wraith");
	lf.beRepaired(100);
	lf.attack("Wraith");	
	lf.whoAmI();
//	lf.highFivesGuys();
	return 0;
}
