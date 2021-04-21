//
// Created by Wolmer Rudy on 4/4/21.
//

#include "Peasant.hpp"

Peasant::Peasant()
{

}

void Peasant::getPolymorphed() const
{
	std::cout << this->name << " has been turned into a brutal big sparrow!" << std::endl;
}

Peasant::~Peasant()
{
	std::cout << "That's it. I'm dead." << std::endl;
}

Peasant::Peasant(const Peasant &original) : Victim()
{
	std::cout << "Ready to work." << std::endl;
}

Peasant::Peasant(const std::string &name) : Victim(name)
{
	std::cout << "Ready to work." << std::endl;
}

Peasant &Peasant::operator=(const Peasant &operand)
{
	Victim::operator=(operand);
	return (*this);
}
