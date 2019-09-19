#pragma once

#include <string>
#include <vector>
using namespace std;

#include "Move.h"

//A character can use:
//Basic attack
//Ability
//Spells


class Character
{
	string name;
	int health;
	int attackPower;
	int magicPower;
	int defPower;
	int magicDefPower;

	int abilitySlots;
	int spellSlots;

	vector<Move> abilityArray;
	vector<Move> spellArray;

public:
	Character() {};
	Character(int aSlots, int sSlots, int apwr, int mpwr, int hlth, int dpwr, int mdpwr) {
	
		abilitySlots = aSlots;
		spellSlots = sSlots;
		attackPower = apwr;
		magicPower = mpwr;
		health = hlth;
		defPower = dpwr;
		magicDefPower = mdpwr;

	};
	~Character() {};

	void setName(string n) {
		n = name;
	}
	string getName() {
		return name;
	}

	void setHealth(int h) {
		h = health;
	}
	int getHealth() {
		return health;
	}

	void setAttackPwr(int &a) {
		a = attackPower;
	}
	int getAttackPwr() {
		return attackPower;
	}

	void setMagPwr(int m) {
		m = magicPower;
	}
	int getMagPwr() {
		return magicPower;
	}

	void setDefPwr(int d) {
		d = defPower;
	}
	int getDefPwr() {
		return defPower;
	}

	void setMagDefPwr(int md) {
		md = magicDefPower;
	}
	int getMagDefPwr() {
		return magicDefPower;
	}


	virtual void attack(){}

	//Player and enemy are going to initialise abilites differently
	virtual void initialiseAbilites() {
		abilityArray.resize(abilitySlots);
	}
	virtual void initialiseSpells() {
		spellArray.resize(spellSlots);
	}

	//Only player?
	void addAbility(Move newAbility) {
		++abilitySlots;

		abilityArray[abilitySlots - 1] = newAbility;
	}
	//Only player?
	void addSpell(Move newSpell) {
		++spellSlots;
	}
};