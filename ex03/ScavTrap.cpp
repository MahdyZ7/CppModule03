#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap()
{
	setEng(base_eng);
	setDmg(base_dmg);
	std::cout << "ScavTrap default constructor\n";
}

ScavTrap::ScavTrap(const std::string pname): ClapTrap(pname)
{
	setEng(base_eng);
	setDmg(base_dmg);
	std::cout << "ScavTrap String constructor called\n";
}

ScavTrap::ScavTrap(ScavTrap const &src):ClapTrap(src)
{
	std::cout << "ScavTrap Copy constructor called\n";
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap default destructor\n";
}

ScavTrap &ScavTrap::operator=(ScavTrap const &cpy)
{
	ClapTrap::operator=(cpy);
	std::cout<<"Copy assignment operator called\n";
	return (*this);
}

void ScavTrap::attack(const std::string& target)
{
	std::string name;
	int hp, eng, dmg;
	this->getInfo(name, &hp, &eng, &dmg);
	if (hp && eng)
	{
		std::cout << "A swift strike from " << name << " to " << target << std::endl;
		std::cout << target << " takes " << dmg << " damage\n";
		eng--;
	}
	else
	{
		std::cout << name << " is unabe to attak, they are ";
		if (hp == 0)
			std::cout<<"defictive\n";
		else
			std::cout<<"too tired\n";
	}
}

void ScavTrap::guardGate(void)
{
	std::string name;
	int hp, eng, dmg;
	this->getInfo(name, &hp, &eng, &dmg);
	if (hp && eng)
		std::cout << "Gate keeper mode active\n";
}