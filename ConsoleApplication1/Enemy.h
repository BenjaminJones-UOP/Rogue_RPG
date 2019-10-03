#pragma once

#include "Character.h"


class Enemy : public Character
{
public:
	Enemy(int aSlots, int sSlots, int apwr, int mpwr, int hlth, int dpwr, int mdpwr, int spd) :
		Character(aSlots, sSlots, apwr, mpwr, hlth, dpwr, mdpwr, spd) 
	{
	
	}; 
	~Enemy() {};

	enum enemyType {

	}m_enemyType;

	void attack() {}

	void initialiseAbilites() {

	}
	void initialiseSpells() {

	}
};