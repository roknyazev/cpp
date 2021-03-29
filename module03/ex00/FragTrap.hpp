//
// Created by Wolmer Rudy on 3/25/21.
//

#ifndef EX00_FRAGTRAP_HPP
#define EX00_FRAGTRAP_HPP
#include <iostream>

class FragTrap
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
	static std::string quotes[5];
	static std::string type_of_attack[5];
public:
	FragTrap();

	~FragTrap();

	FragTrap(const FragTrap &copy);

	FragTrap &operator=(const FragTrap &operand);

	FragTrap(std::string &name);

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void vaulthunter_dot_exe(std::string const & target);
};


#endif //EX00_FRAGTRAP_HPP
