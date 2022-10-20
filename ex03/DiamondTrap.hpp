#ifndef DiamondTrap_HPP
#define DiamondTrap_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap{
	public:
		DiamondTrap(void);
		DiamondTrap(const std::string pname);
		DiamondTrap(DiamondTrap const &src);
		~DiamondTrap(void);

		DiamondTrap &operator=(DiamondTrap const &cpy);
		void whoAmI(void);
	private:
		std::string name;
};
#endif