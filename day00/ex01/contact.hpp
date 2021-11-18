#include <string>
#include <iostream>
#include <iomani>

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

void Contact::printRight const {
	std::cout << "|";
	if (str.size() > 10)
		std::cout << std::setw(10) << std::right << str.substr(0, 9) + ".";
	else
		std::cout << std::setw(10) << std::right << str;		
}

class Contact {
	public:
		Contact() {
			firstName = "";
			lastName = "";
			nickName = "";
			phoneNumber = "";
			darkestSecret = "";
		}
		Contact(std::string a[5]) {
			firstName = a[0];
			lastName = a[1];
			nickName = a[2];
			phoneNumber = a[3];
			darkestSecret = a[4];
		}
		void getFullInfo() const;
		void getSearchInfo() const;
	private:
		void printRight(const std::string& str) const;
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkestSecret;
};
