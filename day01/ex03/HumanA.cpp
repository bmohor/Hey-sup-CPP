#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string nm, Weapon& w) {
	name = nm;
	wp = &w;
}

void HumanA::attack() {
	std::cout << name << " attacks with his " << wp->getter() << std::endl;
}
