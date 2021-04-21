//
// Created by Wolmer Rudy on 4/21/21.
//

#ifndef EX03_ICE_HPP
#define EX03_ICE_HPP
#include "AMateria.hpp"

class Ice : public AMateria
{
private:

public:
	virtual ~Ice();
	Ice();
	Ice(const Ice &original);
	Ice &operator=(const Ice &operand);

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};


#endif //EX03_ICE_HPP
