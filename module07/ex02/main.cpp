#include <iostream>
#include "Array.hpp"

int main()
{
	Array<int> intR(5);


	Array<std::string> intRR(5);
	for (size_t i = 0; i < intRR.size(); i++)
	{
		intRR[i] = "123";
		std::cout << intRR[i] << " | ";
	}
	std::cout << std::endl;
	return (0);
}
