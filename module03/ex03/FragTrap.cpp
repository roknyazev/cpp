//
// Created by Wolmer Rudy on 3/25/21.
//

#include "FragTrap.hpp"

const std::string FragTrap::quotes[3] =
{
		"I am a tornado of death!",
		"That looks like it hurts!",
		"Meat confetti!"
};

const std::string FragTrap::type_of_attack[5] =
{
		" with his AWESOMENESS, BEAUTY, PRESTIGE, GLORY and much more",
		" with his Thor's hammer",
		" with hypnotic dubstep",
		" with laser orbital bombardment from Hyperion space station",
		" with aggressive deadly machine oil spit"
};

FragTrap::~FragTrap()
{
	std::cout << this->type << name << ": "
			  << "I'M DEAD I'M DEAD OHMYGOD I'M DEAD! That's how heroes die..." << std::endl;
}

FragTrap::FragTrap() : ClapTrap()
{
	name = "Another useless tin can";
	type = "FR4G-TP ";
	melee_attack_damage = 30;
	ranged_attack_damage = 20;
	armor_damage_reduction = 5;
	std::cout << "Rebuilding into " << this->type << std::endl;
	std::cout << this->type << name << ": " << "Loading VaultHunter.exe..." << std::endl;
}

FragTrap::FragTrap(std::string &name) : ClapTrap(name)
{
	this->name = name;
	type = "FR4G-TP ";
	melee_attack_damage = 30;
	ranged_attack_damage = 20;
	armor_damage_reduction = 5;
	std::cout << "Rebuilding into " << this->type << std::endl;
	std::cout << this->type << this->name << ": " << "Loading VaultHunter.exe..." << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
	std::cout << "Rebuilding into " << this->type << std::endl;
	std::cout << this->type << name << ": " << "Loading VaultHunter.exe..." << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &operand)
{
	ClapTrap::operator=(operand);
	return (*this);
}

void FragTrap::rangedAttack(const std::string &target)
{
	ClapTrap::rangedAttack(target);
	std::cout << this->type << name << ": Oh god I can't stop!" << std::endl;
}

void FragTrap::meleeAttack(const std::string &target)
{
	ClapTrap::meleeAttack(target);
	std::cout << this->type << name << ": I hope it hurts you a lot!" << std::endl;
}


void FragTrap::vaulthunter_dot_exe(const std::string &target)
{
	std::cout << this->type << name << ": * executes VaultHunter.exe *" << std::endl;
	std::cout << this->type << name << ": This time it will be awesome, I promise!" << std::endl;
	if (energy_points >= 25)
	{
		energy_points -= 25;
		std::cout << this->type << name << " attacks " << target << FragTrap::type_of_attack[rand() % 5] << ", causing "
				  << rand() % ((melee_attack_damage + ranged_attack_damage) * level) + 1 << " points of damage!" << std::endl;
		std::cout << this->type << name << ": " << FragTrap::quotes[rand() % 3] << std::endl;
	}
	else
	{
		std::cout << this->type << name << ": OOOH NOOOO! I don't have enough energy!" << std::endl;
	}
	std::cout << this->type << name << "'s energy level" << ": " << energy_points << std::endl;
}

void FragTrap::issueDuelChallenge(const std::string &target)
{
	std::cout << this->type << name << ": " << target << "! You versus me! Me versus you! Either way!" << std::endl;
}
