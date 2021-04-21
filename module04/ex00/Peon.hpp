//
// Created by Wolmer Rudy on 4/4/21.
//

#ifndef EX00_PEON_HPP
#define EX00_PEON_HPP
#include "Victim.hpp"

class Peon : public Victim
{
private:
	Peon();
public:
	virtual ~Peon();
	Peon(const Peon &original);
	Peon(const std::string &name);
	Peon &operator=(const Peon &operand);

	void getPolymorphed() const;
};


#endif //EX00_PEON_HPP
