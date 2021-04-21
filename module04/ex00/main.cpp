#include <iostream>
#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Peasant.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	Peasant bubba("Bubba");
	std::cout << robert << jim << joe << bubba;
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(bubba);
	return 0;
}
