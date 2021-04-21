//
// Created by Wolmer Rudy on 4/4/21.
//

#ifndef EX01_POWERFIST_HPP
#define EX01_POWERFIST_HPP
#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
public:
	virtual ~PowerFist();
	PowerFist();
	PowerFist(std::string const & name, int apcost, int damage);
	PowerFist(const PowerFist &original);
	PowerFist &operator=(const PowerFist &operand);

	void attack() const;
};


#endif //EX01_POWERFIST_HPP
