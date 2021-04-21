//
// Created by Wolmer Rudy on 4/4/21.
//

#include "PowerFist.hpp"

PowerFist::~PowerFist()
{
}

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{
}

PowerFist::PowerFist(const std::string &name, int apcost, int damage) : AWeapon(name, apcost, damage)
{
}

PowerFist::PowerFist(const PowerFist &original) : AWeapon(original)
{
}

PowerFist &PowerFist::operator=(const PowerFist &operand)
{
	AWeapon::operator=(operand);
	return (*this);
}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
