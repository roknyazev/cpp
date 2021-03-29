//
// Created by Wolmer Rudy on 3/29/21.
//

#ifndef EX01_CLAPTRAP_HPP
#define EX01_CLAPTRAP_HPP
#include "iostream"

class ClapTrap
{
protected:
	int hit_points;
	int max_hit_points;
	int energy_points;
	int max_energy_points;
	int level;
	std::string name;
	int melee_attack_damage;
	int ranged_attack_damage;
	int armor_damage_reduction;
private:
	static const std::string type;
public:
	virtual ~ClapTrap();
	ClapTrap();
	ClapTrap(const ClapTrap &copy);
	ClapTrap &operator=(const ClapTrap &operand);
	ClapTrap(std::string &name);
	virtual void rangedAttack(std::string const & target);
	virtual void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};


#endif //EX01_CLAPTRAP_HPP
