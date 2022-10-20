#ifndef ScavTrap_HPP
#define ScavTrap_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap{
	public:
		ScavTrap(void);
		ScavTrap(const std::string pname);
		ScavTrap(ScavTrap const &src);
		~ScavTrap(void);

		ScavTrap &operator=(ScavTrap const &cpy);
		void	attack(const std::string& target);
		void	guardGate(void);
};
#endif