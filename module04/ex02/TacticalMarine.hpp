//
// Created by Wolmer Rudy on 4/20/21.
//

#ifndef EX02_TACTICALMARINE_HPP
#define EX02_TACTICALMARINE_HPP
#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
private:

public:
	virtual ~TacticalMarine();
	TacticalMarine();
	TacticalMarine(const TacticalMarine &original);
	TacticalMarine &operator=(const TacticalMarine &operand);

	virtual ISpaceMarine* clone() const;
	virtual void battleCry() const;
	virtual void rangedAttack() const;
	virtual void meleeAttack() const;
};


#endif //EX02_TACTICALMARINE_HPP
