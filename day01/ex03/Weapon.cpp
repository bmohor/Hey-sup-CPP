#include "Weapon.hpp"

Weapon::Weapon(std::string nm) {
	wp = nm;
}
const std::string& Weapon::getter() {
	return wp;
}
void	Weapon::setter(std::string tmp) {
	wp = tmp;
}
