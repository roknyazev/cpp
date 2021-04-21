//
// Created by Wolmer Rudy on 4/18/21.
//

#ifndef EX02_SQUAD_HPP
#define EX02_SQUAD_HPP
#include "ISquad.hpp"

class Squad : public ISquad
{
private:
	struct				mList
	{
		ISpaceMarine	*marine;
		mList			*next;
		mList			(ISpaceMarine *spaceMarine);
	};
	mList	*first_marine;
	int		count;
	void	cloneList(mList *original);
	void	deleteList();
public:
	virtual ~Squad();
	Squad();
	Squad(const Squad &original);
	Squad &operator=(const Squad &operand);

	virtual int getCount() const;
	virtual ISpaceMarine* getUnit(int) const;
	virtual int push(ISpaceMarine*);
};

#endif //EX02_SQUAD_HPP
