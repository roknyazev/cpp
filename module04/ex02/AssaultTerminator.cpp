//
// Created by Wolmer Rudy on 4/20/21.
//

#include "AssaultTerminator.hpp"

AssaultTerminator::~AssaultTerminator()
{
	std::cout <<   "I’ll be back..." << std::endl;
}

AssaultTerminator::AssaultTerminator()
{
	std::cout <<  "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &original)
{
	(void)original;
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator &AssaultTerminator::operator=(const AssaultTerminator &operand)
{
	(void)operand;
	return (*this);
}

ISpaceMarine *AssaultTerminator::clone() const
{
	return (new AssaultTerminator(*this));
}

void AssaultTerminator::battleCry() const
{
	std::cout <<  "This code is unclean. PURIFY IT!" << std::endl;
}

void AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}
