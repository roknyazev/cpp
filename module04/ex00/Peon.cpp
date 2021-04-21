//
// Created by Wolmer Rudy on 4/4/21.
//

#include "Peon.hpp"

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

Peon::Peon()
{

}

Peon::Peon(const Peon &original) : Victim(original)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const std::string &name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon &Peon::operator=(const Peon &operand)
{
	Victim::operator=(operand);
	return (*this);
}

void Peon::getPolymorphed() const
{
	std::cout << this->name << " has been turned into a pink pony!" << std::endl;
}
