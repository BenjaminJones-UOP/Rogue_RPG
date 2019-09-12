#pragma once

#include "Character.h"


class Enemy : public Character
{
public:
	Enemy() : Character(/*0, 0, 0, 0, 0, 0, 0*/) {}; //Enemy is created with default 0 values
	~Enemy() {};

	enum enemyType {

	}m_enemyType;

	void attack() {}

	void initialiseAbilites() {

	}
	void initialiseSpells() {

	}
};