#include "HumanB.hpp"
#include <iostream>

void HumanB::setWeapon(Weapon& w) {
	wp = &w;
}

HumanB::HumanB(std::string nm) {
	name = nm;
}
void HumanB::attack() {
	std::cout << name << " attacks with his " << wp->getter() << std::endl;
}
