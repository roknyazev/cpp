#include <iostream>
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"

int main()
{
	//ISpaceMarine* bob = new TacticalMarine;
	//ISpaceMarine* jim = new AssaultTerminator;
	//ISquad* vlc = new Squad;
	//vlc->push(bob);
	//vlc->push(jim);
	//for (int i = 0; i < vlc->getCount(); ++i)
	//{
	//	std::cout << std::endl;
	//	ISpaceMarine* cur = vlc->getUnit(i);
	//	cur->battleCry();
	//	cur->rangedAttack();
	//	cur->meleeAttack();
	//	std::cout << std::endl;
	//}
	//delete vlc;
	//std::cout << std::endl;

	Squad *squad = new Squad;
	for (int i = 0; i < 10; i++)
	{
		squad->push(new TacticalMarine);
	}
	std::cout << std::endl;
	Squad *copy = new Squad(*squad);

	for (int i = 0; i < 5; i++)
	{
		squad->push(new AssaultTerminator);
	}

	*copy = *squad;

	std::cout << copy->getCount() << std::endl;
	for (int i = 0; i < copy->getCount(); ++i)
	{
		std::cout << std::endl;
		ISpaceMarine* cur = copy->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
		std::cout << std::endl;
	}
	delete squad;
	std::cout << std::endl;
	delete copy;
	return 0;
}
