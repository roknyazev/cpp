//
// Created by Wolmer Rudy on 4/4/21.
//

#include "Character.hpp"

Character::~Character()
{
}

Character::Character()
{
}

Character::Character(const std::string &name) :
name(name),
ap(40),
weapon(NULL)
{
}

Character::Character(const Character &original) :
name(original.name),
ap(original.ap),
weapon(original.weapon)
{
}

Character &Character::operator=(const Character &operand)
{
	if (this != &operand)
		return (*this);
	this->name = operand.name;
	this->weapon = operand.weapon;
	this->ap = operand.ap;
	return (*this);
}

void Character::recoverAP()
{
	if ((this->ap += 10) > 40)
		this->ap = 40;
}

void Character::equip(AWeapon *new_weapon)
{
	this->weapon = new_weapon;
}

void Character::attack(Enemy *enemy)
{
	if (this->weapon != NULL && this->ap >= weapon->getAPCost())
	{
		this->weapon->attack();
		this->ap -= weapon->getAPCost();
		std::cout << this->name << " attacks " << enemy->getType()
		<< " with a " << weapon->getName() << std::endl;
		enemy->takeDamage(this->weapon->getDamage());
		if (enemy->getHP() == 0)
			delete enemy;
	}

}

const std::string &Character::getName() const
{
	return (this->name);
}

int Character::getAP() const
{
	return this->ap;
}

const AWeapon *Character::getWeapon() const
{
	return (this->weapon);
}

std::ostream &operator<<(std::ostream &out, const Character &character)
{
	if (character.getWeapon() != NULL)
		out <<  character.getName() << " has " << character.getAP()
			<< " AP and wields a " << character.getWeapon()->getName() << std::endl;
	else
		out <<  character.getName() << " has " << character.getAP()
			<< " AP and is unarmed" << std::endl;
	return (out);
}
