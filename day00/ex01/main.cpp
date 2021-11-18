#include "phonebook.hpp"
#include <iostream>
#include <string>

int	main()
{
	std::string input;
	Phonebook	ph;
	int count = 0;
	while (1)
	{
		std::cin >> input;
		if (input == "EXIT")
			return (0);
		else if (input == "ADD") {
			ph.addContact(count);
			if (count != 7)
				count++;
		}
		else if (input == "ADDMORE") {
			std::cout << "How much do u want to add? ";
			int num;
			std::cin >> num;
			if (num < 0) {
				std::cout << "Fool u think I misshandled such a stupid error?" << 
					std::endl << "Ive set your input to 0, so u gonna add NOTHIN fool." << std::endl;
				num = 0;
			}
			else if (num > 8) {
				std::cout << "Fool u think I misshandled such a stupid error?" << 
					std::endl << "Ive set your input to 8, so u bouta change all contacts fool ..." << std::endl;
				num = 8;
			}
			while (num--) {
				ph.addContact(count);
				if (count != 7)
					count++;
			}
		}
		else if (input == "SEARCH")
			ph.getInfo(count);
		else
			std::cout << "No such comma" << std::endl;
	}
}
