# include "FragTrap.hpp"

int main(void)
{
	FragTrap fly_scrap("Yanshi");
	{
		std::cout <<" Test all constructors\n";
		FragTrap hanson;
		hanson = fly_scrap;
		FragTrap caplan = hanson; 
		FragTrap cowen(caplan);
		cowen.attack("cats");
	}
	std::cout<< "\n\t Test methods\n";
	fly_scrap.attack("man");
	fly_scrap.takeDamage(9);
	fly_scrap.beRepaired(10);
	std::cout<<" \033[0;35m";
	for(int i = 0; i < 8; ++i)
		fly_scrap.attack("cats");
	std::cout<<"\033[0m";
	fly_scrap.highFivesGuys();
	fly_scrap.beRepaired(10);
	fly_scrap.takeDamage(1000);
	fly_scrap.attack("bird");
}