#include <iostream>
#include "iter.hpp"

int main()
{
	int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	iter(arr, 10, increment);
	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << arr[i] << std::endl;
	}
	return 0;
}
