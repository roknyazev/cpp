//
// Created by Wolmer Rudy on 4/4/21.
//

#ifndef EX01_AWEAPON_HPP
#define EX01_AWEAPON_HPP
#include <iostream>

class AWeapon
{
private:
	std::string name;
	int apcost;
	int damage;
	AWeapon();
public:
	virtual ~AWeapon();
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(const AWeapon &original);
	AWeapon &operator=(const AWeapon &operand);

	const std::string &getName() const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const = 0;
};


#endif //EX01_AWEAPON_HPP
