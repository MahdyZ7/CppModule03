/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassin <ayassin@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:24:26 by ayassin           #+#    #+#             */
/*   Updated: 2022/10/20 11:24:27 by ayassin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): hp(100), eng(50), dmg(20)
{
	name = "WarpTart";
	std::cout<< "Default constructor called\n";
}

ClapTrap::ClapTrap(std::string pname): hp(100), eng(50), dmg(20)
{
	name = pname;
	std::cout<< "String constructor called\n";
}

ClapTrap::ClapTrap(ClapTrap const &src): hp(src.hp), eng(src.eng), dmg(src.dmg)
{
	std::cout << "Copy constructor called\n";
	name = src.name;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called\n";
}

// methods

ClapTrap &ClapTrap::operator=(ClapTrap const &cpy)
{
	std::cout<<"Copy assignment operator called\n";
	name = cpy.name;
	hp = cpy.hp;
	eng = cpy.eng;
	dmg = cpy.dmg;
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (hp && eng)
	{
		std::cout << name << " attacks " << target << std::endl;
		std::cout << target << " takes " << dmg << " damage\n";
		eng--;
	}
	else
	{
		std::cout << name << " is unabe to attak, they are ";
		if (hp == 0)
			std::cout<<"dead\n";
		else
			std::cout<<"too tired\n";
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hp > 0)
	{
		if (amount >= hp)
		{
			std::cout<< name << " takes " << hp << " damage. They die in combat\n";
			hp = 0;
		}
		else
		{
			std::cout<< name << " takes " << amount << " damage\n";
			hp = hp - amount;
		}
	}
	else
		std::cout<< "Behave, " << name << " is already dead\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (eng && hp)
	{
		if (amount + hp < hp)
			hp = -1;
		else
			hp = hp + amount;
		std::cout << name << " is heald. They have " << hp << " hp\n";
		--eng;
	}
	else
	{
		std::cout << name << " is unabe to heal, they are ";
		if (hp == 0)
			std::cout<<"dead\n";
		else
			std::cout<<" too tired\n";
	}
}

void ClapTrap::setEng(unsigned int num)
{
	eng = num;
}

void ClapTrap::setDmg(unsigned int num)
{
	dmg = num;
}

void ClapTrap::getInfo(std::string &str, int *hp_clone, int *eng_clone, int *dmg_clone)
{
	str = name;
	*hp_clone = hp;
	*eng_clone = eng;
	*dmg_clone = dmg;
}
