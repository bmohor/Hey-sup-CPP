#pragma once
#include <string>

class Weapon{
	public:
		Weapon() {};
		Weapon(std::string nm);
		const std::string& getter();
		void setter(std::string);
	private:
		std::string wp;
};
