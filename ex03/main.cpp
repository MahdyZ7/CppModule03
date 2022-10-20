# include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap fly_scrap("Yanshi");
	{
		std::cout <<" Test all constructors\n";
		DiamondTrap hanson;
		hanson = fly_scrap;
		DiamondTrap caplan = hanson; 
		DiamondTrap cowen(caplan);
		std::cout<<"\033[0;32m";
		cowen.whoAmI();
		cowen.attack("cats");
		std::cout<<"\033[0m";
	}
	std::cout<< "\n\t Test methods\n";
	std::cout<<"\033[0;35m";
	fly_scrap.attack("man");
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