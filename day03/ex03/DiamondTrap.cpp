#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	Name = "Lifeline";
	Hitpoints = FragTrap::Hitpoints;
	EnergyPoints = ScavTrap::EnergyPoints;
	AttackDamage = FragTrap::AttackDamage;
	std::cout << "Check yo self - or wreck yo self" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string name) {
	Name = name;
	Hitpoints = FragTrap::Hitpoints;
	EnergyPoints = ScavTrap::EnergyPoints;
	AttackDamage = FragTrap::AttackDamage;
	std::cout << "Check yo self - or wreck yo self." << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << this->Name + ": I come too far to give up now." << std::endl;
}

void DiamondTrap::attack(const std::string& target) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
	std::cout << "Name is: " + Name + ". Or: " + ClapTrap::Name << std::endl;
}
