#include <string>
#include <iostream>
#include <fstream>

int main(int ac, char **av) {
	if (ac == 4) {
		std::string file = av[1];
		const std::string path = file;
		std::ifstream input(path);
		if (input) {
			const std::string path2 = file + ".replace";
			std::ofstream output(path2);
			std::string s1 = av[2];
			std::string s2 = av[3];
			std::string str;
			while (input >> str) {
				if (str == s1)
					str = s2;
				output << str << ' ';
			}
		}
	}
	return 0;
}
