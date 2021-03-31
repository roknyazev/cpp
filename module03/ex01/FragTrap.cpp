//
// Created by Wolmer Rudy on 3/25/21.
//

#include "FragTrap.hpp"

const std::string FragTrap::type = "FR4G-TP ";

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
	std::cout << FragTrap::type << name << ": "
			  << "I'M DEAD I'M DEAD OHMYGOD I'M DEAD! That's how heroes die..." << std::endl;
	std::cout << std::endl;
}

FragTrap::FragTrap()
{
	hit_points = 100;
	max_hit_points = 100;
	energy_points = 100;
	max_energy_points = 100;
	level = 1;
	name = "Another useless tin can";
	melee_attack_damage = 30;
	ranged_attack_damage = 20;
	armor_damage_reduction = 5;
	std::cout << "Building " << this->type << std::endl;
	std::cout << this->type << name << ": " << "Loading VaultHunter.exe..." << std::endl;
	std::cout << std::endl;
}

FragTrap::FragTrap(std::string &name)
{
	hit_points = 100;
	max_hit_points = 100;
	energy_points = 100;
	max_energy_points = 100;
	level = 1;
	this->name = name;
	melee_attack_damage = 30;
	ranged_attack_damage = 20;
	armor_damage_reduction = 5;
	std::cout << "Building " << this->type << std::endl;
	std::cout << this->type << this->name << ": " << "Loading VaultHunter.exe..." << std::endl;
	std::cout << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy)
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
	std::cout << this->type << name << ": " << "Loading VaultHunter.exe..." << std::endl;
	std::cout << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &operand)
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

void FragTrap::rangedAttack(const std::string &target)
{
	std::cout << this->type << name << " attacks " << target << " at range, causing "
	<< ranged_attack_damage << " points of damage!" << std::endl;
	std::cout << this->type << name << ": Oh god I can't stop!" << std::endl << std::endl;
}

void FragTrap::meleeAttack(const std::string &target)
{
	std::cout << this->type << name << " attacks " << target << " at melee, causing "
	<< melee_attack_damage << " points of damage!" << std::endl;
	std::cout << this->type << name << ": I hope it hurts you a lot!" << std::endl << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
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

void FragTrap::beRepaired(unsigned int amount)
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
	std::cout << std::endl;
}
