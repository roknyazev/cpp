//
// Created by Wolmer Rudy on 4/5/21.
//

#include "RocketLauncher.hpp"

RocketLauncher::~RocketLauncher()
{
}

RocketLauncher::RocketLauncher() : AWeapon("Rocket Launcher", 21, 80)
{
}

RocketLauncher::RocketLauncher(const std::string &name, int apcost, int damage) : AWeapon(name, apcost, damage)
{
}

RocketLauncher::RocketLauncher(const RocketLauncher &original) : AWeapon(original)
{
}

RocketLauncher &RocketLauncher::operator=(const RocketLauncher &operand)
{
	AWeapon::operator=(operand);
	return (*this);
}

void RocketLauncher::attack() const
{
	std::cout << "* pshhhhhhhhh  BOOM! *" << std::endl;
}
