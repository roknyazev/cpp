//
// Created by Wolmer Rudy on 4/21/21.
//

#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::~Cure()
{
}

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(const Cure &original) : AMateria(original)
{
}

Cure &Cure::operator=(const Cure &operand)
{
	AMateria::operator=(operand);
	return (*this);
}

AMateria *Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.name << " *"<< std::endl;
}
