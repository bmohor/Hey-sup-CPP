#include "Zombie.hpp"

int main() {
	Zombie *first = newZombie("First");
	delete first;
	randomChump("Second");
	Zombie *third = newZombie("third");
	delete third;
	return 0;
}
