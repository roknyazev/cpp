//
// Created by Wolmer Rudy on 4/4/21.
//

#ifndef EX01_CHARACTER_HPP
#define EX01_CHARACTER_HPP
#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
private:
	std::string name;
	int ap;
	AWeapon *weapon;
	Character();
public:
	virtual ~Character();
	Character(std::string const & name);
	Character(const Character &original);
	Character &operator=(const Character &operand);

	void recoverAP();
	void equip(AWeapon*);
	void attack(Enemy*);
	const std::string & getName() const;
	int getAP() const;
	const AWeapon *getWeapon() const;
};

std::ostream &operator<<(std::ostream &out, const Character &character);

#endif //EX01_CHARACTER_HPP
