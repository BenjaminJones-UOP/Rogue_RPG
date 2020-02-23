#pragma once

#include "Character.h"
#include "Weapon.h"
#include "Armour.h"

class Player : public Character
{
	Weapon equippedWeapon;
	Armour equippedArmour;

	int attackTotal;
	int defenseTotal;

public:

	Player(int aSlots, int sSlots, int apwr, int mpwr, int hlth, int dpwr, int mdpwr, int spd, Armour startArmour, Weapon startWeapon)
		: Character( aSlots,  sSlots,  apwr,  mpwr,  hlth,  dpwr,  mdpwr,  spd), 
		equippedArmour(startArmour), 
		equippedWeapon(startWeapon)
	{
		//Initialise when a player is spawned
		initialiseAbilites();
		initialiseSpells();
		initialiseStats();
	}; 
	~Player() {};

	enum playerType {
		Warrior,
		Rogue,
		Mage
	}m_playerType;

	int getAttackTotal() {
		return attackTotal;
	}
	int getDefenseTotal() {
		return defenseTotal;
	}

	void Attack(Character &other) {
		int otherHealth = other.getHealth();

		otherHealth -= attackTotal;

		other.setHealth(otherHealth);
	}

	void initialiseStats() {
		attackTotal = getAttackPwr() + equippedWeapon.getWeaponDmg();
		defenseTotal = getDefPwr() + equippedArmour.getDefensePoints();
	}
	void initialiseAbilites() override {
		
	}
	void initialiseSpells() override {
		
	}
};