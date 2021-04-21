//
// Created by Wolmer Rudy on 4/21/21.
//

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::~AMateria()
{
}

AMateria::AMateria(const std::string &type) : _type(type), _xp(0)
{
}

AMateria::AMateria(const AMateria &original) : _type(original._type), _xp(original._xp)
{
}

AMateria &AMateria::operator=(const AMateria &operand)
{
	if (this == &operand)
		return (*this);
	this->_xp = operand._xp;
	this->_type = operand._type;
	return (*this);
}

std::string const &AMateria::getType() const
{
	return this->_type;
}

unsigned int AMateria::getXP() const
{
	return this->_xp;
}

void AMateria::use(ICharacter &target)
{
	(void)target;
	this->_xp += 10;
}
