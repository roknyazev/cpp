//
// Created by Wolmer Rudy on 5/1/21.
//

#ifndef EX02_ARRAY_HPP
#define EX02_ARRAY_HPP
#include "iostream"

template <typename T>
class Array
{
private:
	T *array;
	unsigned int len;
public:
	virtual ~Array();
	Array();
	Array(unsigned int n);
	Array(const Array &original);
	Array &operator=(const Array &operand);
	T &operator[](unsigned int offset);

	class OutOfRangeException: public std::exception
	{
		const char *what() const throw();
	};

	unsigned int size() const;
};

#include "Array.ipp"

#endif //EX02_ARRAY_HPP
