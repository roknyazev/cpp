//
// Created by Wolmer Rudy on 4/4/21.
//

#include "PlasmaRifle.hpp"

PlasmaRifle::~PlasmaRifle()
{
}

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::PlasmaRifle(const std::string &name, int apcost, int damage) : AWeapon(name, apcost, damage)
{
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &original) : AWeapon(original)
{
}

PlasmaRifle &PlasmaRifle::operator=(const PlasmaRifle &operand)
{
	AWeapon::operator=(operand);
	return (*this);
}

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
