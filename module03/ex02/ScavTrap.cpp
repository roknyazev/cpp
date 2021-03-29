//
// Created by Wolmer Rudy on 3/25/21.
//

#include "ScavTrap.hpp"

const std::string ScavTrap::type = "SC4V-TP ";

const std::string ScavTrap::quotes[5] =
		{
				"pay three hundred bucks.",
				"collect 139,377 brown rocks.",
				"defeat Destroyer of Worlds.",
				"hear a new dubstep song I wrote (you're gonna have to suffer).",
				"dance for me."
		};


ScavTrap::~ScavTrap()
{
	std::cout << this->type << name << ": " << "All right, this is death. Good thing I don't have a soul."
	<< std::endl << std::endl;
}


ScavTrap::ScavTrap()
{
	hit_points = 100;
	max_hit_points = 100;
	energy_points = 50;
	max_energy_points = 50;
	level = 1;
	name = "Another useless scav slave";
	melee_attack_damage = 20;
	ranged_attack_damage = 15;
	armor_damage_reduction = 3;
	std::cout << "Building " << this->type << std::endl;
	std::cout << this->type << name << ": " << "Loading DungeonMaster.exe..." << std::endl << std::endl;
}


ScavTrap::ScavTrap(const ScavTrap &copy)
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
	std::cout << this->type << name << ": " << "Loading DungeonMaster.exe..." << std::endl << std::endl;
}


ScavTrap::ScavTrap(std::string &name)
{
	hit_points = 100;
	max_hit_points = 100;
	energy_points = 50;
	max_energy_points = 50;
	level = 1;
	this->name = name;
	melee_attack_damage = 20;
	ranged_attack_damage = 15;
	armor_damage_reduction = 3;
	std::cout << "Building " << this->type << std::endl;
	std::cout << this->type << name << ": " << "Loading DungeonMaster.exe..." << std::endl << std::endl;
}



ScavTrap &ScavTrap::operator=(const ScavTrap &operand)
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


void ScavTrap::rangedAttack(const std::string &target)
{
	std::cout << this->type << name << " attacks " << target << " at range, causing "
			  << ranged_attack_damage << " points of damage!" << std::endl << std::endl;
}


void ScavTrap::meleeAttack(const std::string &target)
{
	std::cout << this->type << name << " attacks " << target << " at melee, causing "
			  << melee_attack_damage << " points of damage!" << std::endl << std::endl;
}


void ScavTrap::takeDamage(unsigned int amount)
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


void ScavTrap::beRepaired(unsigned int amount)
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


void ScavTrap::challengeNewcomer(const std::string &newcomer_name)
{
	std::cout << this->type << name << ": * executes DungeonMaster.exe *" << std::endl;
	std::cout << "FR4G-TP " << name << ": " << "Welcome, " << newcomer_name
	<< "! If you want to get inside the dungeon, you'll have to " << ScavTrap::quotes[rand() % 5]
	<< std::endl << std::endl;
}
