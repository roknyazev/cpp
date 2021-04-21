//
// Created by Wolmer Rudy on 4/5/21.
//

#ifndef EX01_CRAZYPSYCHO_HPP
#define EX01_CRAZYPSYCHO_HPP
#include "Enemy.hpp"

class CrazyPsycho : public Enemy
{
public:
	virtual ~CrazyPsycho();
	CrazyPsycho();
	CrazyPsycho(int hp, std::string const &type);
	CrazyPsycho(const CrazyPsycho &original);
	CrazyPsycho &operator=(const CrazyPsycho &operand);

	void takeDamage(int);
};


#endif //EX01_CRAZYPSYCHO_HPP
