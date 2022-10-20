# include "ScavTrap.hpp"

int main(void)
{
	ScavTrap fly_scrap("Don Bitzer");
	{
		std::cout <<" Test all constructors\n";
		ScavTrap hanson;
		hanson = fly_scrap;
		ScavTrap caplan = hanson; 
		ScavTrap cowen(caplan);
		cowen.attack("man");
	}
	std::cout<< "\n\t Test methods\n";
	fly_scrap.attack("man");
	fly_scrap.takeDamage(9);
	fly_scrap.beRepaired(10);
	std::cout<<" \033[0;35m";
	for(int i = 0; i < 8; ++i)
		fly_scrap.attack("Mankind");
	std::cout<<"\033[0m";
	fly_scrap.beRepaired(10);
	fly_scrap.guardGate();
	fly_scrap.takeDamage(1000);
	fly_scrap.attack("man");
	fly_scrap.guardGate();
}