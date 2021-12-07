#pragma once
#include "FragTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap {
	public:
		DiamondTrap();
		DiamondTrap(const std::string name);
		~DiamondTrap();
		void attack(const std::string& target);
		void whoAmI();
	private:
		std::string Name;
};
