#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"


int main()
{
	srand(time(NULL));
	std::string scavName = "Bubba";
	std::string ninjaName = "Kama";


	//ScavTrap scavTrap(scavName);
	//std::cout << std::endl;
	FragTrap fragTrap(scavName);
	std::cout << std::endl;
	NinjaTrap ninjaTrap(ninjaName);
	std::cout << std::endl;
	ninjaTrap.ninjaShoebox(fragTrap);
	std::cout << std::endl;


	return 0;
}
