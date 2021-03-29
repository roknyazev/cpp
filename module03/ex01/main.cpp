#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


int main()
{
	srand(time(NULL));
	std::string name = "Bubba";

	ScavTrap scavTrap(name);
	scavTrap.takeDamage(20);
	scavTrap.takeDamage(100);
	scavTrap.beRepaired(50);
	scavTrap.beRepaired(500);
	scavTrap.rangedAttack("Boba");
	scavTrap.meleeAttack("Biba");
	scavTrap.challengeNewcomer("another victim");
	scavTrap.takeDamage(150);
	return 0;
}
