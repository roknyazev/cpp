//
// Created by Wolmer Rudy on 4/20/21.
//

#ifndef EX02_ASSAULTTERMINATOR_HPP
#define EX02_ASSAULTTERMINATOR_HPP
#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
private:

public:
	virtual ~AssaultTerminator();
	AssaultTerminator();
	AssaultTerminator(const AssaultTerminator &original);
	AssaultTerminator &operator=(const AssaultTerminator &operand);

	virtual ISpaceMarine* clone() const;
	virtual void battleCry() const;
	virtual void rangedAttack() const;
	virtual void meleeAttack() const;
};


#endif //EX02_ASSAULTTERMINATOR_HPP
