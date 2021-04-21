//
// Created by Wolmer Rudy on 4/21/21.
//

#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::~Ice()
{
}

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(const Ice &original) : AMateria(original)
{
}

Ice &Ice::operator=(const Ice &operand)
{
	AMateria::operator=(operand);
	return (*this);
}

AMateria *Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.name << "'s wounds *"<< std::endl;
}
