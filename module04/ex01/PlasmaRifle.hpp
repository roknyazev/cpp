//
// Created by Wolmer Rudy on 4/4/21.
//

#ifndef EX01_PLASMARIFLE_HPP
#define EX01_PLASMARIFLE_HPP
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
public:
	virtual ~PlasmaRifle();
	PlasmaRifle();
	PlasmaRifle(std::string const & name, int apcost, int damage);
	PlasmaRifle(const PlasmaRifle &original);
	PlasmaRifle &operator=(const PlasmaRifle &operand);

	void attack() const;
};


#endif //EX01_PLASMARIFLE_HPP
