#pragma once

#include "Character.h"


class Enemy : public Character
{
public:
	Enemy(int aSlots, int sSlots, int apwr, int mpwr, int hlth, int dpwr, int mdpwr, int spd)  
		: Character(aSlots, sSlots, apwr, mpwr, hlth, dpwr, mdpwr, spd)
	{
		//Initialise when spawned
		initialiseAbilites();
		initialiseSpells();
	}; 
	~Enemy() {};

	enum enemyType {

	}m_enemyType;

	void Attack(Character &other) {
		int otherHealth = other.getHealth();

		otherHealth -= getAttackPwr();

		other.setHealth(otherHealth);
	}

	void initialiseAbilites() override {

	}
	void initialiseSpells() override {

	}
};