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
	int speed;

	int abilitySlots;
	int spellSlots;

	vector<Move> abilityArray;
	vector<Move> spellArray;

public:
	Character(int aSlots, int sSlots, int apwr, int mpwr, int hlth, int dpwr, int mdpwr, int spd) {
	
		abilitySlots = aSlots;
		spellSlots = sSlots;
		attackPower = apwr;
		magicPower = mpwr;
		health = hlth;
		defPower = dpwr;
		magicDefPower = mdpwr;
		speed = spd;

	};
	~Character() {};

	void setName(string n) {
		name = n;
	}
	string getName() {
		return name;
	}

	void setHealth(int &h) {
		health = h;
	}
	int getHealth() {
		return health;
	}

	void setAttackPwr(int &a) {
		attackPower = a;
	}
	int getAttackPwr() {
		return attackPower;
	}

	void setMagPwr(int &m) {
		magicPower = m;
	}
	int getMagPwr() {
		return magicPower;
	}

	void setDefPwr(int &d) {
		defPower = d;
	}
	int getDefPwr() {
		return defPower;
	}

	void setMagDefPwr(int &md) {
		magicDefPower = md;
	}
	int getMagDefPwr() {
		return magicDefPower;
	}

	void setSpeed(int &spd) {
		speed = spd;
	}
	int getSpeed() {
		return speed;
	}

	void setAbilitySlots(int &aSlots) {
		abilitySlots = aSlots;
	}
	int getAbilitySlots() {
		return abilitySlots;
	}

	void setSpellSlots(int &sSlots) {
		spellSlots = sSlots;
	}
	int getSpellSlots(){
		return spellSlots;
	}

	//Player and enemy are going to initialise abilites differently
	virtual void initialiseAbilites() {
		abilityArray.resize(abilitySlots);
	}
	virtual void initialiseSpells() {
		spellArray.resize(spellSlots);
	}

	void addAbility(Move &newAbility) { //possible reference/pointer here
		++abilitySlots;

		abilityArray[abilitySlots - 1] = newAbility;
	}
	void addSpell(Move &newSpell) {
		++spellSlots;

		spellArray[spellSlots - 1] = newSpell;
	}
};