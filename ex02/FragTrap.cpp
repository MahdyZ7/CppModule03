/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassin <ayassin@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:21:15 by ayassin           #+#    #+#             */
/*   Updated: 2022/10/20 11:24:12 by ayassin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap()
{
	setEng(base_eng);
	setDmg(base_dmg);
	std::cout << "FragTrap default constructor\n";
}

FragTrap::FragTrap(const std::string pname): ClapTrap(pname)
{
	setEng(base_eng);
	setDmg(base_dmg);
	std::cout << "FragTrap String constructor called\n";
}

FragTrap::FragTrap(FragTrap const &src):ClapTrap(src)
{
	std::cout << "FragTrap Copy constructor called\n";
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap default destructor\n";
}

FragTrap &FragTrap::operator=(FragTrap const &cpy)
{
	ClapTrap::operator=(cpy);
	std::cout<<"Copy assignment operator called\n";
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	std::string name;
	int hp, eng, dmg;
	this->getInfo(name, &hp, &eng, &dmg);
	if (hp && eng)
		std::cout << "\033[31;1m" << "High fives all around\n" << "\033[0m";
}