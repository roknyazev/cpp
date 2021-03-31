//
// Created by Wolmer Rudy on 3/27/21.
//

#ifndef EX01_SCAVTRAP_HPP
#define EX01_SCAVTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	static const std::string quotes[5];
public:
	virtual ~ScavTrap();
	ScavTrap();
	ScavTrap(const ScavTrap &copy);
	ScavTrap(std::string &name);

	ScavTrap &operator=(const ScavTrap &operand);

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void challengeNewcomer(const std::string &newcomer_name);
};


#endif //EX01_SCAVTRAP_HPP
