/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassin <ayassin@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:24:32 by ayassin           #+#    #+#             */
/*   Updated: 2022/10/20 11:24:33 by ayassin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void): ClapTrap("WarpTart_clap_name"), ScavTrap()
{
	name = "WarpTart";
	setEng(ScavTrap::base_eng);
	setDmg(FragTrap::base_dmg);
	std::cout << "DiamondTrap default constructor\n";
}

DiamondTrap::DiamondTrap(const std::string pname): ClapTrap(pname + "_clap_name"),  ScavTrap(pname), FragTrap(pname)
{
	name = pname;
	setEng(ScavTrap::base_eng);
	setDmg(FragTrap::base_dmg);
	std::cout << "DiamondTrap String constructor called\n";
}

DiamondTrap::DiamondTrap(DiamondTrap const &src):ClapTrap(src), ScavTrap(src), FragTrap(src)
{
	name = src.name;
	std::cout << "DiamondTrap Copy constructor called\n";
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap default destructor\n";
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &cpy)
{
	ScavTrap::operator=(cpy);
	name = cpy.name;
	std::cout<<"Copy assignment operator called\n";
	return (*this);
}

void DiamondTrap::whoAmI(void)
{
	std::string cl_name;
	int hp, eng, dmg;
	this->getInfo(cl_name, &hp, &eng, &dmg);
	if (hp && eng)
	{
		std::cout << "I am " << name << "\n";
		std::cout << "I am also a " << cl_name << "\n";
	}
}
