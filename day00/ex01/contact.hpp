#pragma once
#include <string>
#include <iostream>
#include <iomanip>

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
