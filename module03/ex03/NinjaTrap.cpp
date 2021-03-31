//
// Created by Wolmer Rudy on 3/31/21.
//

#include "NinjaTrap.hpp"

NinjaTrap::~NinjaTrap()
{
	std::cout << this->type << name << ": "
			  << "What an inglorious death..."
			  << std::endl;
}

NinjaTrap::NinjaTrap() : ClapTrap()
{
	hit_points = 60;
	max_hit_points = 60;
	energy_points = 120;
	max_energy_points = 120;
	name = "Another useless fighting shoebox";
	type = "N1NJ4-TP ";
	melee_attack_damage = 60;
	ranged_attack_damage = 5;
	armor_damage_reduction = 0;
	std::cout << "Rebuilding into " << this->type << std::endl;
	std::cout << this->type << name << ": " << "Loading NinjaShoebox.exe..." << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap &copy) : ClapTrap(copy)
{
	std::cout << "Rebuilding into " << this->type << std::endl;
	std::cout << this->type << name << ": " << "Loading NinjaShoebox.exe..." << std::endl;
}

NinjaTrap::NinjaTrap(std::string &name) : ClapTrap(name)
{
	hit_points = 60;
	max_hit_points = 60;
	energy_points = 120;
	max_energy_points = 120;
	type = "N1NJ4-TP ";
	melee_attack_damage = 60;
	ranged_attack_damage = 5;
	armor_damage_reduction = 0;
	std::cout << "Rebuilding into " << this->type << std::endl;
	std::cout << this->type << name << ": " << "Loading NinjaShoebox.exe..." << std::endl;
}

NinjaTrap &NinjaTrap::operator=(const NinjaTrap &operand)
{
	ClapTrap::operator=(operand);
	return (*this);
}

void NinjaTrap::rangedAttack(const std::string &target)
{
	ClapTrap::rangedAttack(target);
	std::cout << this->type << name << ": SHAAAAAA!!!" << std::endl;
	std::cout << this->type << name << " WOW! I hit 'em!" << std::endl;
}

void NinjaTrap::meleeAttack(const std::string &target)
{
	ClapTrap::meleeAttack(target);
	std::cout << this->type << name << ": TAAAAAAA!!! Take that!" << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap &fragTrap)
{
	std::cout << this->type << name << " Find vault first and made "
	<< fragTrap.getType() << fragTrap.getName() << " angry..." << std::endl;
	fragTrap.issueDuelChallenge(name);
	this->rangedAttack(fragTrap.getName());
	fragTrap.vaulthunter_dot_exe(name);
	this->meleeAttack(fragTrap.getName());
	fragTrap.vaulthunter_dot_exe(name);
	std::cout << this->type << name << ": STOP! STOP!.." << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap &scavTrap)
{
	std::cout << this->type << name << " Trided to quietly sneak into the dungeon but was detected by "
	<< scavTrap.getType() << scavTrap.getName() << "..." << std::endl;
	scavTrap.rangedAttack(name);
	std::cout << this->type << name << ": Oh shit I'm sorry" << std::endl;
	scavTrap.acceptApology();
	scavTrap.challengeNewcomer(this->name);
	std::cout << this->type << name << ": I wont't do it..." << std::endl;
	scavTrap.meleeAttack(name);
	this->meleeAttack(scavTrap.getName());
	scavTrap.takeDamage(melee_attack_damage);
	scavTrap.letIn();
	std::cout << this->type << name << ": That's amazing" << std::endl;
}

void NinjaTrap::ninjaShoebox(ClapTrap &clapTrap)
{

}

void NinjaTrap::ninjaShoebox(NinjaTrap &ninjaTrap)
{

}
