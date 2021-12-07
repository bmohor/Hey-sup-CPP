#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	Name = "Crypto";
	Hitpoints = 100;
	EnergyPoints = 100;
	AttackDamage = 30;
	std::cout << "This is only the beginning. 끝나면 알 거야." << std::endl;
}

FragTrap::FragTrap(const std::string name) : ClapTrap() {
	Name = name;
	Hitpoints = 100;
	EnergyPoints = 100;
	AttackDamage = 30;
	std::cout << "This is only the beginning. 끝나면 알 거야." << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << Name + ": I'm down. I'm not done yet." << std::endl;
}

void	FragTrap::attack(const std::string& target) {
	if (Hitpoints > 0)
		std::cout << Name + ": Hit " + target + " with " + std::to_string(AttackDamage) + " damage. How long were you on my tail? 솔직하게 말해?" << std::endl;
	else
		std::cout << Name + ": Need to recharge my shields first." << std::endl;
}

void	highFivesGuys(void) {
		std::cout << "잘했어! We were well prepared." << std::endl;
}
