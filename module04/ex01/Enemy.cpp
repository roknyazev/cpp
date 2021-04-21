//
// Created by Wolmer Rudy on 4/4/21.
//

#include "Enemy.hpp"

Enemy::~Enemy()
{
}

Enemy::Enemy()
{
}

Enemy::Enemy(int hp, const std::string &type)
{
	this->hp = hp;
	this->type = type;
}

Enemy::Enemy(const Enemy &original)
{
	this->hp = original.hp;
	this->type = original.type;
}

Enemy &Enemy::operator=(const Enemy &operand)
{
	if (this == &operand)
		return (*this);
	this->hp = operand.hp;
	this->type = operand.type;
	return (*this);
}

const std::string &Enemy::getType() const
{
	return (this->type);
}

int Enemy::getHP() const
{
	return (this->hp);
}

void Enemy::takeDamage(int damage)
{
	if (damage <= 0)
		return;
	if ((this->hp -= damage) < 0)
		this->hp = 0;
}
