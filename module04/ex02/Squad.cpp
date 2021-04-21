//
// Created by Wolmer Rudy on 4/18/21.
//

#include "Squad.hpp"

Squad::mList::mList(ISpaceMarine *spaceMarine) : marine(spaceMarine), next(nullptr)
{
}

Squad::~Squad()
{
	deleteList();
}

void Squad::deleteList()
{
	mList *tmp;

	while (first_marine != nullptr)
	{
		tmp = first_marine->next;
		delete first_marine->marine;
		delete first_marine;
		first_marine = tmp;
	}
}

Squad::Squad()
{
	this->count = 0;
	this->first_marine = nullptr;
}

Squad::Squad(const Squad &original)
{
	this->count = 0;
	this->first_marine = nullptr;
	cloneList(original.first_marine);
}

Squad &Squad::operator=(const Squad &operand)
{
	if (this == &operand)
		return (*this);
	this->count = 0;
	deleteList();
	cloneList(operand.first_marine);
	return (*this);
}

void Squad::cloneList(mList *original)
{
	while (original != nullptr)
	{
		push(original->marine->clone());
		original = original->next;
	}
}

int Squad::getCount() const
{
	return count;
}

ISpaceMarine *Squad::getUnit(int number) const
{
	mList *node = first_marine;
	int i = 0;

	if (number < 0)
		return nullptr;
	while (node != nullptr)
	{
		if (i == number)
			break;
		node = node->next;
		i++;
	}
	return node->marine;
}

int Squad::push(ISpaceMarine *spaceMarine)
{
	mList *last_marine = first_marine;

	if (first_marine == nullptr)
	{
		first_marine = new mList(spaceMarine);
		return (++count);
	}
	while (last_marine->next != nullptr)
	{
		if (last_marine->marine == spaceMarine)
			return (count);
		last_marine = last_marine->next;
	}
	last_marine->next = new mList(spaceMarine);
	return ++count;
}
