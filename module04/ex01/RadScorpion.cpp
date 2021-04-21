//
// Created by Wolmer Rudy on 4/4/21.
//

#include "RadScorpion.hpp"

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(int hp, const std::string &type) : Enemy(hp, type)
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &original) : Enemy(original)
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion &RadScorpion::operator=(const RadScorpion &operand)
{
	Enemy::operator=(operand);
	return (*this);
}
