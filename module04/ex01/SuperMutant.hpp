//
// Created by Wolmer Rudy on 4/4/21.
//

#ifndef EX01_SUPERMUTANT_HPP
#define EX01_SUPERMUTANT_HPP
#include "Enemy.hpp"

class SuperMutant : public Enemy
{
public:
	virtual ~SuperMutant();
	SuperMutant();
	SuperMutant(int hp, std::string const & type);
	SuperMutant(const SuperMutant &original);
	SuperMutant &operator=(const SuperMutant &operand);

	void takeDamage(int);
};


#endif //EX01_SUPERMUTANT_HPP
