#include "Karen.hpp"

int main() {
	Karen hey;
	std::string input;
	while (getline(std::cin, input) && !std::cin.eof()) {
		try {
			hey.complain(input);
		} catch(std::invalid_argument& ex) {
			std::cout << ex.what() << std::endl;
		}
	}
	return 0;
}
