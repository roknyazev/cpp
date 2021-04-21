//
// Created by Wolmer Rudy on 4/4/21.
//

#ifndef EX00_PEASANT_HPP
#define EX00_PEASANT_HPP
#include "Victim.hpp"

class Peasant : public Victim
{
private:
	Peasant();
public:
	virtual ~Peasant();
	Peasant(const Peasant &original);
	Peasant(const std::string &name);
	Peasant &operator=(const Peasant &operand);

	void getPolymorphed() const;
};


#endif //EX00_PEASANT_HPP
