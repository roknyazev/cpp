//
// Created by Wolmer Rudy on 4/2/21.
//

#include "Sorcerer.hpp"

Sorcerer::~Sorcerer()
{
	std::cout << name << ", " << title << " is dead. Consequences will never be the same!" << std::endl;
}

const std::string &Sorcerer::get_name() const
{
	return (this->name);
}

const std::string &Sorcerer::get_title() const
{
	return (this->title);
}

Sorcerer::Sorcerer()
{
}

Sorcerer::Sorcerer(const std::string &name, const std::string &title)
{
	this->name = name;
	this->title = title;
	std::cout << name << ", " << title << " is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &original)
{
	this->name = original.name;
	this->title = original.title;
	std::cout << name << ", " << title << " is born!" << std::endl;
}

Sorcerer &Sorcerer::operator=(const Sorcerer &operand)
{
	if (this == &operand)
		return (*this);
	this->name = operand.name;
	this->title = operand.title;
	return (*this);
}

std::ostream &operator<<(std::ostream &out, const Sorcerer  &sorcerer)
{
	out <<  "I am " << sorcerer.get_name() << ", " << sorcerer.get_title() << ", and I like ponies!" << std::endl;
	return (out);
}

void Sorcerer::polymorph(const Victim &victim) const
{
	//std::cout <<  "I am " << this->name << ", " << this->title << ", and I turn you, "
	//<< victim.get_name() << " into a sheep !" << std::endl;
	victim.getPolymorphed();
}
