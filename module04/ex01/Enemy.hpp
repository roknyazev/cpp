//
// Created by Wolmer Rudy on 4/4/21.
//

#ifndef EX01_ENEMY_HPP
#define EX01_ENEMY_HPP
#include "iostream"

class Enemy
{
private:
	std::string type;
	int hp;
	Enemy();
public:
	virtual ~Enemy();
	Enemy(int hp, std::string const & type);
	Enemy(const Enemy &original);
	Enemy &operator=(const Enemy &operand);

	const std::string & getType() const;
	int getHP() const;
	virtual void takeDamage(int);
};


#endif //EX01_ENEMY_HPP
