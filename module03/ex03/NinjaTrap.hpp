//
// Created by Wolmer Rudy on 3/31/21.
//

#ifndef EX02_NINJATRAP_HPP
#define EX02_NINJATRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : ClapTrap
{
private:

public:
	virtual ~NinjaTrap();

	NinjaTrap();
	NinjaTrap(const NinjaTrap &copy);
	NinjaTrap(std::string &name);

	NinjaTrap &operator=(const NinjaTrap &operand);

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void ninjaShoebox(FragTrap &fragTrap);
	void ninjaShoebox(ScavTrap &scavTrap);
	void ninjaShoebox(ClapTrap &clapTrap);
	void ninjaShoebox(NinjaTrap &ninjaTrap);
};


#endif //EX02_NINJATRAP_HPP
