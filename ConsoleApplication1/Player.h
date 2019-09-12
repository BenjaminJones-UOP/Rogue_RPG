#pragma once

#include "Character.h"

class Player : public Character
{
public:
	Player(int aSlots, int sSlots, int apwr, int mpwr, int hlth, int dpwr, int mdpwr) : 
		Character(/*aSlots, sSlots, apwr, mpwr, hlth, dpwr, mdpwr*/) 
	{
		this->setAttackPwr(apwr);
	}; //When a player is created, initial values go into its character variables
	~Player() {};

	virtual void attack() {}

	virtual void initialiseAbilites() override {
		
	}
	virtual void initialiseSpells() override {
		
	}
};