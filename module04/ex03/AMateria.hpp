//
// Created by Wolmer Rudy on 4/21/21.
//

#ifndef EX03_AMATERIA_HPP
#define EX03_AMATERIA_HPP
#include <iostream>
class ICharacter;

class AMateria
{
private:
	AMateria();
	std::string _type;
	unsigned int _xp;
public:
	virtual ~AMateria();
	AMateria(std::string const & type);
	AMateria(const AMateria &original);
	AMateria &operator=(const AMateria &operand);

	std::string const & getType() const; //Returns the materia type
	unsigned int getXP() const; //Returns the Materia's XP
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};


#endif //EX03_AMATERIA_HPP
