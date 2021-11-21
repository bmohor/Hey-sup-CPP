#include "contact.hpp"

void Contact::getFullInfo() const {
			std::cout << std::left << std::setw(15) << "First name: " << firstName << std::endl;
			std::cout << std::left << std::setw(15) << "Last name: " << lastName << std::endl;
			std::cout << std::left << std::setw(15) << "Nickname: " << nickName << std::endl;
			std::cout << std::left << std::setw(15) << "Phone num: " << phoneNumber << std::endl;
			std::cout << std::left << std::setw(15) << "Deep Secret: " << darkestSecret << std::endl;
}

void Contact::getSearchInfo() const {
			printRight(firstName);
			printRight(lastName);
			printRight(nickName);
}

void Contact::printRight(const std::string& str) const {
	std::cout << "|";
	if (str.size() > 10)
		std::cout << std::setw(10) << std::right << str.substr(0, 9) + ".";
	else
		std::cout << std::setw(10) << std::right << str;		
}
