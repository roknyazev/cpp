//
// Created by Wolmer Rudy on 4/5/21.
//

#ifndef EX01_ROCKETLAUNCHER_HPP
#define EX01_ROCKETLAUNCHER_HPP
#include "AWeapon.hpp"

class RocketLauncher : public AWeapon
{
public:
	virtual ~RocketLauncher();
	RocketLauncher();
	RocketLauncher(std::string const &name, int apcost, int damage);
	RocketLauncher(const RocketLauncher &original);
	RocketLauncher &operator=(const RocketLauncher &operand);

	void attack() const;
};


#endif //EX01_ROCKETLAUNCHER_HPP
