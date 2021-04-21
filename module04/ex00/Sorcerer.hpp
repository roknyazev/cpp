//
// Created by Wolmer Rudy on 4/2/21.
//

#ifndef EX00_SORCERER_HPP
#define EX00_SORCERER_HPP
#include <iostream>
#include "Victim.hpp"

class Sorcerer
{
private:
	std::string name;
	std::string title;
	Sorcerer();
public:
	virtual ~Sorcerer();
	Sorcerer(const std::string &name, const std::string &title);
	Sorcerer(const Sorcerer &original);
	Sorcerer &operator=(const Sorcerer &operand);

	const std::string &get_name() const;
	const std::string &get_title() const;
	void polymorph(Victim const &) const;
};

std::ostream &operator<<(std::ostream &out, const Sorcerer  &sorcerer);

#endif //EX00_SORCERER_HPP
