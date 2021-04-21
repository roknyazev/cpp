//
// Created by Wolmer Rudy on 4/4/21.
//

#include "AWeapon.hpp"

AWeapon::~AWeapon()
{
}

AWeapon::AWeapon()
{
}

AWeapon::AWeapon(const std::string &name, int apcost, int damage)
{
	this->name = name;
	this->apcost = apcost;
	this->damage = damage;
}

AWeapon::AWeapon(const AWeapon &original)
{
	this->name = original.name;
	this->apcost = original.apcost;
	this->damage = original.damage;
}

AWeapon &AWeapon::operator=(const AWeapon &operand)
{
	if (this == &operand)
		return (*this);
	this->name = operand.name;
	this->apcost = operand.apcost;
	this->damage = operand.damage;
	return (*this);
}

const std::string &AWeapon::getName() const
{
	return (this->name);
}

int AWeapon::getAPCost() const
{
	return (this->apcost);
}

int AWeapon::getDamage() const
{
	return (this->damage);
}
