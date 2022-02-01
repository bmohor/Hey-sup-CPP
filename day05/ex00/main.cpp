#include "Bureaucrat.hpp"

int main() {
	try{
		Bureaucrat bureaucrat("bib", 156);
		std::cout << bureaucrat << std::endl;
	} catch(std::exception & e) {
		e.what();
	}
}
