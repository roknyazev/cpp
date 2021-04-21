//
// Created by Wolmer Rudy on 4/4/21.
//

#ifndef EX00_VICTIM_HPP
#define EX00_VICTIM_HPP
#include <iostream>

class Victim
{
protected:
	std::string name;
	Victim();
public:
	virtual ~Victim();
	Victim(const std::string &name);
	Victim(const Victim &original);
	Victim &operator=(const Victim &operand);

	const std::string &get_name() const;
	virtual void getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &out, const Victim &victim);

#endif //EX00_VICTIM_HPP
