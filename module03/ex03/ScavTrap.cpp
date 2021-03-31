//
// Created by Wolmer Rudy on 3/25/21.
//

#include "ScavTrap.hpp"

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
	<< std::endl;
}


ScavTrap::ScavTrap() : ClapTrap()
{
	energy_points = 50;
	max_energy_points = 50;
	name = "Another useless scav slave";
	type = "SC4V-TP ";
	melee_attack_damage = 20;
	armor_damage_reduction = 3;
	std::cout << "Rebuilding into " << this->type << std::endl;
	std::cout << this->type << name << ": " << "Loading DungeonMaster.exe..." << std::endl;
}


ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
	std::cout << "Rebuilding into " << this->type << std::endl;
	std::cout << this->type << name << ": " << "Loading DungeonMaster.exe..." << std::endl;
}


ScavTrap::ScavTrap(std::string &name) : ClapTrap(name)
{
	energy_points = 50;
	max_energy_points = 50;
	type = "SC4V-TP ";
	melee_attack_damage = 20;
	armor_damage_reduction = 3;
	std::cout << "Rebuilding into " << this->type << std::endl;
	std::cout << this->type << name << ": " << "Loading DungeonMaster.exe..." << std::endl;
}



ScavTrap &ScavTrap::operator=(const ScavTrap &operand)
{
	ClapTrap::operator=(operand);
	return (*this);
}


void ScavTrap::rangedAttack(const std::string &target)
{
	ClapTrap::rangedAttack(target);
	std::cout << this->type << name << ": " << "That's POWER, "<< target << "! "
	<< "Now get your ass back here!" << std::endl;
}


void ScavTrap::meleeAttack(const std::string &target)
{
	ClapTrap::meleeAttack(target);
	std::cout << this->type << name << ": It's because you got me mad, " << target << "!" << std::endl;
}


void ScavTrap::challengeNewcomer(const std::string &newcomer_name)
{
	std::cout << this->type << name << ": * executes DungeonMaster.exe *" << std::endl;
	std::cout << this->type << name << ": " << newcomer_name
	<< ", if you want to get inside the dungeon, you'll have to " << ScavTrap::quotes[rand() % 5]
	<< std::endl;
}

void ScavTrap::acceptApology()
{
	std::cout << this->type << name << ": Sorry for what?" << std::endl;
}

void ScavTrap::letIn()
{
	std::cout << this->type << name << ": OK! You deserve to be in the other side of that door!" << std::endl;
}
