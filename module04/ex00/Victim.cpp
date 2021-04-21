//
// Created by Wolmer Rudy on 4/4/21.
//

#include "Victim.hpp"

Victim::~Victim()
{
	std::cout << "Victim " << this->name << " just died for no apparent reason!" << std::endl;
}

Victim::Victim()
{
}

Victim::Victim(const std::string &name)
{
	this->name = name;
	std::cout << "Some random victim called " << this->name << " just appeared!" << std::endl;
}

Victim::Victim(const Victim &original)
{
	this->name = original.name;
	std::cout << "Some random victim called " << this->name << " just appeared!" << std::endl;
}

const std::string &Victim::get_name() const
{
	return (this->name);
}

Victim &Victim::operator=(const Victim &operand)
{
	if (this == &operand)
		return (*this);
	this->name = operand.name;
	return (*this);
}

std::ostream &operator<<(std::ostream &out, const Victim &victim)
{
	out << "I'm " << victim.get_name() << " and I like otters!" << std::endl;
	return (out);
}

void Victim::getPolymorphed() const
{
	std::cout << this->name << " has been turned into a cute little sheep!" << std::endl;
}
