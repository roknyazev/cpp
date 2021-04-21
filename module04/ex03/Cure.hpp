//
// Created by Wolmer Rudy on 4/21/21.
//

#ifndef EX03_CURE_HPP
#define EX03_CURE_HPP
#include "AMateria.hpp"

class Cure : public AMateria
{
public:
	virtual ~Cure();
	Cure();
	Cure(const Cure &original);
	Cure &operator=(const Cure &operand);

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};


#endif //EX03_CURE_HPP
