#include <iostream>
#include "Enemy.hpp"
#include "PlasmaRifle.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"
#include "PowerFist.hpp"
#include "RocketLauncher.hpp"
#include "CrazyPsycho.hpp"
#include "SuperMutant.hpp"

int main()
{
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	AWeapon* rl = new RocketLauncher();
	Character* me = new Character("me");
	std::cout << *me;

	std::cout << std::endl;
	Enemy* b = new RadScorpion();

	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);

	std::cout << std::endl;
	Enemy *c = new CrazyPsycho();
	me->equip(rl);
	me->attack(c);
	std::cout << *me;
	me->recoverAP();
	me->recoverAP();
	me->equip(pf);
	me->attack(c);
	std::cout << *me;

	std::cout << std::endl;
	Enemy *d = new SuperMutant();
	for (int i = 0; i < 6; i++)
		me->recoverAP();
	std::cout << *me;
	me->equip(rl);
	me->attack(d);
	for (int i = 0; i < 6; i++)
		me->recoverAP();
	std::cout << *me;
	me->attack(d);
	me->equip(pr);
	me->attack(d);
	return 0;
}
