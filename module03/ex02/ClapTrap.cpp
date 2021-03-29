//
// Created by Wolmer Rudy on 3/29/21.
//

#include "ClapTrap.hpp"

const std::string ClapTrap::type = "CL4P-TP ";

ClapTrap::~ClapTrap()
{
	std::cout << this->type << name << ": "
			  << "I'll die the way I lived: annoying!" << std::endl;
	std::cout << std::endl;
}


ClapTrap::ClapTrap() :	hit_points(100), max_hit_points(100), energy_points(100), max_energy_points(100),
level(1), name(""), melee_attack_damage(15), ranged_attack_damage(15), armor_damage_reduction(0)
{
	std::cout << "Building " << this->type << std::endl;
	std::cout << this->type << name << ": " << "Starting bootup sequence..." << std::endl;
	std::cout << std::endl;
}



ClapTrap::ClapTrap(std::string &name) : hit_points(100), max_hit_points(100), energy_points(100), max_energy_points(100),
level(1), melee_attack_damage(15), ranged_attack_damage(15), armor_damage_reduction(0)
{
	this->name = name;
	std::cout << "Building " << this->type << std::endl;
	std::cout << this->type << name << ": " << "Starting bootup sequence..." << std::endl;
	std::cout << std::endl;
}


ClapTrap::ClapTrap(const ClapTrap &copy)
{
	hit_points = copy.hit_points;
	max_hit_points = copy.max_hit_points;
	energy_points = copy.energy_points;
	max_energy_points = copy.max_energy_points;
	level = copy.level;
	name = copy.name;
	melee_attack_damage = copy.melee_attack_damage;
	ranged_attack_damage = copy.ranged_attack_damage;
	armor_damage_reduction = copy.armor_damage_reduction;
	std::cout << "Building " << this->type << std::endl;
	std::cout << this->type << name << ": " << "Starting bootup sequence..." << std::endl;
	std::cout << std::endl;
}


ClapTrap &ClapTrap::operator=(const ClapTrap &operand)
{
	if (this == &operand)
		return (*this);
	hit_points = operand.hit_points;
	max_hit_points = operand.max_hit_points;
	energy_points = operand.energy_points;
	max_energy_points = operand.max_energy_points;
	level = operand.level;
	name = operand.name;
	melee_attack_damage = operand.melee_attack_damage;
	ranged_attack_damage = operand.ranged_attack_damage;
	armor_damage_reduction = operand.armor_damage_reduction;
	return (*this);
}


void ClapTrap::rangedAttack(const std::string &target)
{
	std::cout << this->type << name << " attacks " << target << " at range, causing "
			  << ranged_attack_damage << " points of damage!" << std::endl;
	std::cout << std::endl;
}


void ClapTrap::meleeAttack(const std::string &target)
{
	std::cout << this->type << name << " attacks " << target << " at melee, causing "
			  << melee_attack_damage << " points of damage!" << std::endl;
	std::cout << std::endl;
}


void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount == 0)
		return;
	std::cout << this->type << name << " takes " << amount << " damage" << std::endl;
	std::cout << this->type << name << ": " << "My robotic flesh! AAHH!" << std::endl;
	if ((hit_points = (hit_points - (int)amount + armor_damage_reduction)) <= 0)
	{
		hit_points = 0;
		std::cout << this->type << name << ": " <<
				  "Vaulthunter! I can't feel my legs. Oh, they ain't there... Why do I have the wheel instead of legs?"
				  << std::endl;
	}
	std::cout << this->type << name << "'s health points" << ": " << hit_points << std::endl;
	std::cout << std::endl;
}


void ClapTrap::beRepaired(unsigned int amount)
{
	if (amount == 0)
		return;
	std::cout << this->type << name << " repaired " << amount << " health points" << std::endl;
	if (hit_points <= 5)
		std::cout << this->type << name << ": " << "Thanks for giving me a second chance, God. I really appreciate it."
				  << std::endl;
	else
		std::cout << this->type << name << ": " << "Sweet life juice!" << std::endl;
	if ((hit_points = (hit_points + (int)amount)) > max_hit_points)
		hit_points = max_hit_points;
	std::cout << this->type << name << "'s health points" << ": " << hit_points << std::endl;
	std::cout << std::endl;
}
