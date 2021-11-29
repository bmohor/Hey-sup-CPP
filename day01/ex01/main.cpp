#include "Zombie.hpp"

int main() {
	int N = 4;
	Zombie *first = ZombieHorde(N, "Zombie on heap");
	{
		Zombie *second = ZombieHorde(N, "Zombie on heap inside block");
		delete [] second;
	}
	delete [] first;
	return 0;
}
