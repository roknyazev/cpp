//
// Created by Wolmer Rudy on 3/25/21.
//

#ifndef EX00_FRAGTRAP_HPP
#define EX00_FRAGTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
	static const std::string quotes[3];
	static const std::string type_of_attack[5];
public:
	virtual ~FragTrap();
	FragTrap();
	FragTrap(const FragTrap &copy);
	FragTrap(std::string &name);

	FragTrap &operator=(const FragTrap &operand);

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void vaulthunter_dot_exe(std::string const & target);
};


#endif //EX00_FRAGTRAP_HPP
