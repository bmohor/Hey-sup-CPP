#include "contact.hpp"
#include <iomanip>

class Phonebook {
	public:
		void	addContact(int id) {
			std::string a[5];
			for (int i = 0; i < 5; i++)
				std::cin >> a[i];
			Contact tmp(a);
			arr[id] = tmp;
		}
		void	getInfo(int id) {
			if (id < 7)
				id--;
			for (int i = 0; i <= id; i++) {
				std::cout << std::setw(10) << std::right << i + 1;
				arr[i].getSearchInfo();
				std::cout << std::endl;
			}
			int j;
			std::cout << "Pick an id and see the full contact info: ";
			std::cin >> j;
			if (j > 0 && j < 9)
				arr[j - 1].getFullInfo();
			else
				std::cout << "Fool u think I misshandled such a stupid error? ...";
		}
	private:
		Contact arr[8];
};
