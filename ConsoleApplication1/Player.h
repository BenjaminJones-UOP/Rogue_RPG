#pragma once

#include "Character.h"

class Player : public Character
{
public:

	Player() : Character() {};

	Player(int aSlots, int sSlots, int apwr, int mpwr, int hlth, int dpwr, int mdpwr, int spd) : 
		Character(aSlots, sSlots, apwr, mpwr, hlth, dpwr, mdpwr, spd) 
	{

		
	}; //When a player is created, initial values go into its character variables
	~Player() {};

	enum playerType {
		Warrior,
		Rogue,
		Mage
	}m_playerType;

	void attack() {}

	void initialiseAbilites() override {
		
	}
	void initialiseSpells() override {
		
	}
};