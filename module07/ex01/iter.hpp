//
// Created by Wolmer Rudy on 5/1/21.
//

#ifndef EX01_ITER_HPP
#define EX01_ITER_HPP

template<typename T>
void iter(T *arr, int len, void (*f)(T &arg))
{
	for (int i = 0; i < len; i++)
		(*f)(arr[i]);
}


template<typename T>
void increment(T &arg)
{
	std::cout << arg << " ";
	arg += 5;
	std::cout << arg << std::endl;
}

#endif //EX01_ITER_HPP
