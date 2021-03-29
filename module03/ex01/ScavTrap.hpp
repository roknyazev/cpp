//
// Created by Wolmer Rudy on 3/27/21.
//

#ifndef EX01_SCAVTRAP_HPP
#define EX01_SCAVTRAP_HPP
#include <iostream>

class ScavTrap
{
private:
	int hit_points;
	int max_hit_points;
	int energy_points;
	int max_energy_points;
	int level;
	std::string name;
	int melee_attack_damage;
	int ranged_attack_damage;
	int armor_damage_reduction;
	static const std::string quotes[5];
	static const std::string type;
public:
	virtual ~ScavTrap();

	ScavTrap();

	ScavTrap(const ScavTrap &copy);

	ScavTrap &operator=(const ScavTrap &operand);

	ScavTrap(std::string &name);

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void challengeNewcomer(const std::string &newcomer_name);
};


#endif //EX01_SCAVTRAP_HPP
