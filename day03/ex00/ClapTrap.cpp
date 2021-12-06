#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	Name = "noname";
	Hitpoints = 10;
	EnergyPoints = 10;
	AttackDamage = 0;
}

ClapTrap::ClapTrap(std::string name) {
	Name = name;
	Hitpoints = 10;
	EnergyPoints = 10;
	AttackDamage = 0;
	std::cout << "Bam goes the boozle." << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << Name + ": Bad news, I'm down." << std::endl;
}

void	ClapTrap::attack(const std::string& target) {
	if (Hitpoints > 0)
		std::cout << Name + ": " + target + " got blam-boozled! With " + std::to_string(AttackDamage) + " blams"<< std::endl;
	else
		std::cout << Name + ": Need to recharge my shields." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	Hitpoints -= amount;
	if (Hitpoints < 0)
		Hitpoints = 0;
	std::cout << Name + ": Shots fired and they are hitting me. "
		+ std::to_string(Hitpoints) + " shield cells left" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	Hitpoints += amount;
	if (Hitpoints > 100)
		Hitpoints = 100;
	std::cout << Name + ": Recharged my shields. Now I got " + std::to_string(Hitpoints) + " at least..."<< std::endl;
}
