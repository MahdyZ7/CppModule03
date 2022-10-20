/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassin <ayassin@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:24:45 by ayassin           #+#    #+#             */
/*   Updated: 2022/10/20 11:41:49 by ayassin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap fly_scrap("lubliana");
	{
		std::cout <<" Test all constructors\n";
		std::cout<<"\033[0;36m";
		DiamondTrap hanson;
		std::cout<<"\033[0m";
		hanson = fly_scrap;
		DiamondTrap caplan = hanson; 
		DiamondTrap cowen(caplan);
		std::cout<<"\033[0;32m";
		cowen.whoAmI();
		cowen.attack("clown");
		std::cout<<"\033[0m";
	}
	std::cout<< "\n\t Test methods\n";
	std::cout<<"\033[0;35m";
	fly_scrap.attack("clown");
	fly_scrap.takeDamage(9);
	fly_scrap.beRepaired(10);
	fly_scrap.highFivesGuys();
	std::cout<<"\033[0;35m";
	fly_scrap.guardGate();
	fly_scrap.beRepaired(10);
	fly_scrap.takeDamage(1000);
	fly_scrap.attack("bird");
	std::cout<<"\033[0m";
}