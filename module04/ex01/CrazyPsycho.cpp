//
// Created by Wolmer Rudy on 4/5/21.
//

#include "CrazyPsycho.hpp"

CrazyPsycho::~CrazyPsycho()
{
	std::cout << "No! GOOOOD... No! GOOOOD!" << std::endl;
}

CrazyPsycho::CrazyPsycho() : Enemy(100, "Crazy Psycho")
{
	std::cout << "Another walking meat puppet!" << std::endl;
}

CrazyPsycho::CrazyPsycho(int hp, const std::string &type) : Enemy(hp, type)
{
	std::cout << "Another walking meat puppet!" << std::endl;
}

CrazyPsycho::CrazyPsycho(const CrazyPsycho &original) : Enemy(original)
{
	std::cout << "Another walking meat puppet!" << std::endl;
}

CrazyPsycho &CrazyPsycho::operator=(const CrazyPsycho &operand)
{
	Enemy::operator=(operand);
	return (*this);
}

void CrazyPsycho::takeDamage(int damage)
{
	Enemy::takeDamage(damage + 5);
}
