//
// Created by Wolmer Rudy on 4/4/21.
//

#ifndef EX01_RADSCORPION_HPP
#define EX01_RADSCORPION_HPP
#include "Enemy.hpp"

class RadScorpion : public Enemy
{
public:
	virtual ~RadScorpion();
	RadScorpion();
	RadScorpion(int hp, std::string const & type);
	RadScorpion(const RadScorpion &original);
	RadScorpion &operator=(const RadScorpion &operand);
};


#endif //EX01_RADSCORPION_HPP
