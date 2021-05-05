//
// Created by Wolmer Rudy on 5/1/21.
//

#ifndef EX00_WHATEVER_HPP
#define EX00_WHATEVER_HPP

template <typename T>
void swap(T &arg1, T &arg2)
{
	T tmp;

	tmp = arg1;
	arg1 = arg2;
	arg2 = tmp;
}

template <typename T>
T &min(T &arg1, T &arg2)
{
	if (arg1 < arg2)
		return arg1;
	else
		return arg2;
}

template <typename T>
T &max(T &arg1, T &arg2)
{
	if (arg1 > arg2)
		return arg1;
	else
		return arg2;
}

#endif //EX00_WHATEVER_HPP
