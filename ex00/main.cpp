# include "ClapTrap.hpp"

int main(void)
{
	ClapTrap fly_scrap("moon baboon");
	{
		std::cout <<" Test all constructors\n";
		ClapTrap hanson;
		hanson = fly_scrap;
		ClapTrap caplan = hanson;
		ClapTrap cowen(caplan);
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
	fly_scrap.takeDamage(1000);
}