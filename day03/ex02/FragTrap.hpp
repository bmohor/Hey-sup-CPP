#include "ScavTrap.hpp"

class FragTrap:public ClapTrap {
	public:
		FragTrap();
		FragTrap(const std::string name);
		~FragTrap();
		void highFivesGuys(void);
		void attack(const std::string& target);
};
