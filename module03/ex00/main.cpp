#include <iostream>
#include "FragTrap.hpp"


int main()
{
	srand(time(NULL));
	std::string name = "Bubba";

	FragTrap fragTrap(name);
	fragTrap.takeDamage(20);
	fragTrap.takeDamage(100);
	fragTrap.beRepaired(50);
	fragTrap.beRepaired(500);
	fragTrap.rangedAttack("Boba");
	fragTrap.meleeAttack("Biba");
	fragTrap.vaulthunter_dot_exe("Beba");
	return 0;
}
