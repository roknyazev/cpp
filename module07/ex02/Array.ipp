//
// Created by Wolmer Rudy on 5/1/21.
//

template<typename T>
Array<T>::~Array()
{
	if (array != nullptr)
		delete []array;
}

template<typename T>
Array<T>::Array() : len(0), array(nullptr)
{
}

template<typename T>
Array<T>::Array(unsigned int n)
{
	len = n;
	if (n > 0)
		array = new T[n]();
	else
		array = nullptr;
}

template<typename T>
Array<T>::Array(const Array &original) : len(original.len)
{
	if (len > 0)
		array = new T[original.len];
	else
		array = nullptr;
	for (unsigned int i = 0; i < len; i++)
		array[i] = original.array[i];
}

template<typename T>
Array<T> &Array<T>::operator=(const Array &operand)
{
	if (this == &operand)
		return *this;
	if (array != nullptr)
		delete array;
	len = operand.len;
	if (len > 0)
		array = new T[operand.len];
	else
		array = nullptr;
	for (unsigned int i = 0; i < len; i++)
		array[i] = operand.array[i];
	return *this;
}

template<typename T>
T &Array<T>::operator[](unsigned int offset)
{
	if (offset >= len)
		throw OutOfRangeException();
	return array[offset];
}

template<typename T>
unsigned int Array<T>::size() const
{
	return len;
}

template<typename T>
const char* Array<T>::OutOfRangeException::what() const throw()
{
	return "Index out of range";
}

