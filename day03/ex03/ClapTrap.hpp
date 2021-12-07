#pragma once
#include <iostream>
#include <string>

class ClapTrap {
	public:
		ClapTrap();
		ClapTrap(const std::string name);
		~ClapTrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	protected:
		std::string Name;
		int	Hitpoints;
		int EnergyPoints;
		int AttackDamage;
};
