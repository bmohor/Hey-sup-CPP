#pragma once
#include "contact.hpp"
class Phonebook {
	public:
		void	addContact(int id);
		void	getInfo(int id);
	private:
		Contact arr[8];
};
