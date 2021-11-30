#include "Karen.hpp"

int main(int argc, char **av) {
	if (argc == 2) {
		Karen hey;
		hey.complain(av[1]);
	}
	return 0;
}
