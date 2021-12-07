#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	Name = "Rampart";
	Hitpoints = 100;
	EnergyPoints = 100;
	AttackDamage = 30;
	std::cout << "Eh, we both woke up today! Not a bad start." << std::endl;
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap() {
	Name = name;
	Hitpoints = 100;
	EnergyPoints = 100;
	AttackDamage = 30;
	std::cout << "Eh, we both woke up today! Not a bad start." << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << Name + ": They got me. Nice shot though…." << std::endl;
}

void	ScavTrap::attack(const std::string& target) {
	if (Hitpoints > 0)
		std::cout << Name + ": Hit " + target + " with " + std::to_string(AttackDamage) + " damage. Didn't even have to take off my jacket." << std::endl;
	else
		std::cout << Name + ": Need to recharge my shields first." << std::endl;
}
void ScavTrap::guardGate() {
	std::cout << "Entered the GATE" << std::endl;
}
