#include "Zombie.hpp"

Zombie*	ZombieHorde(int N, std::string name) {
	Zombie *n = new Zombie[N];
	for (int i = 0; i < N; i++) {
		n[i].setter(name);
	}
	return n;
}
