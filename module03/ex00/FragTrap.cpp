#include <__bit_reference>
//
// Created by Wolmer Rudy on 3/25/21.
//

#include "FragTrap.hpp"

std::string FragTrap::quotes[5] =
{
		"TAAAAA! I am a tornado of death!",
		"SHAAAAA! I hope it hurts you a lot!",
		"That looks like it hurts!",
		"Meat confetti!",
		"Oh god I can't stop!"
};

std::string FragTrap::type_of_attack[5] =
{
		" with his AWESOMENESS, BEAUTY, PRESTIGE and much more",
		" with his Thor's hammer",
		" with hypnotic dubstep",
		" with laser orbital bombardment from Hyperion space station",
		" with aggressive deadly spit with machine oil"
};

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
	std::cout << "FR4G-TP " << name << ": " << "Start bootup sequence..." << std::endl;
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
	std::cout << "FR4G-TP " << this->name << ": " << "Start bootup sequence..." << std::endl;
	std::cout << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FR4G-TP " << name << ": "
	<< "I'M DEAD I'M DEAD OHMYGOD I'M DEAD! That's how heroes die..." << std::endl;
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
	std::cout << "FR4G-TP " << name << ": " << "Start bootup sequence" << std::endl;
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
	std::cout << "FR4G-TP " << name << " attacks " << target << " at range, causing "
	<< ranged_attack_damage << " points of damage!" << std::endl;
	std::cout << std::endl;
}

void FragTrap::meleeAttack(const std::string &target)
{
	std::cout << "FR4G-TP " << name << " attacks " << target << " at melee, causing "
	<< melee_attack_damage << " points of damage!" << std::endl;
	std::cout << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	if (amount == 0)
		return;
	std::cout << "FR4G-TP " << name << " takes " << amount << " damage" << std::endl;
	std::cout << "FR4G-TP " << name << ": " << "My robotic flesh! AAHH!" << std::endl;
	if ((hit_points = (hit_points - (int)amount + armor_damage_reduction)) <= 0)
	{
		hit_points = 0;
		std::cout << "FR4G-TP " << name << ": " <<
		"Vaulthunter! I can't feel my legs. Oh, they ain't there... Why do I have a wheel instead of legs?"
		<< std::endl;
	}
	std::cout << "FR4G-TP " << name << "'s health points" << ": " << hit_points << std::endl;
	std::cout << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
	if (amount == 0)
		return;
	std::cout << "FR4G-TP " << name << " repaired " << amount << " health points" << std::endl;
	if (hit_points <= 5)
		std::cout << "FR4G-TP " << name << ": " << "Thanks for giving me a second chance, God. I really appreciate it."
		<< std::endl;
	else
		std::cout << "FR4G-TP " << name << ": " << "Sweet life juice!" << std::endl;
	if ((hit_points = (hit_points + (int)amount)) > max_hit_points)
		hit_points = max_hit_points;
	std::cout << "FR4G-TP " << name << "'s health points" << ": " << hit_points << std::endl;
	std::cout << std::endl;
}

void FragTrap::vaulthunter_dot_exe(const std::string &target)
{
	std::cout << "FR4G-TP " << name << ": * calling VaultHunter.exe *" << std::endl;
	std::cout << "FR4G-TP " << name << ": This time it will be awesome, I promise!" << std::endl;
	if (energy_points >= 25)
	{
		energy_points -= 25;
		std::cout << "FR4G-TP " << name << " attacks " << target << FragTrap::type_of_attack[rand() % 5] << ", causing "
				  << rand() % ((melee_attack_damage + ranged_attack_damage) * level) + 1 << " points of damage!" << std::endl;
		std::cout << "FR4G-TP " << name << ": " << FragTrap::quotes[rand() % 5] << std::endl;
	}
	else
	{
		std::cout << "FR4G-TP " << name << ": OOOH NOOOO! I don't have enough energy!" << std::endl;
	}
	std::cout << "FR4G-TP " << name << "'s energy level" << ": " << energy_points << std::endl;
	std::cout << std::endl;
}
