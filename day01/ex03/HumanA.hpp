#pragma once
#include "Weapon.hpp"

class HumanA {
	public:
		HumanA(std::string nm, Weapon &w);
		void attack();
	private:
		std::string name;
		Weapon *wp;
};
