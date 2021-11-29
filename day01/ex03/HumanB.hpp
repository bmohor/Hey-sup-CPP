#pragma once
#include "Weapon.hpp"

class HumanB {
	public:
		HumanB(std::string nm);
		void setWeapon(Weapon& w);
		void attack();
	private:
		std::string name;
		Weapon *wp;
};
