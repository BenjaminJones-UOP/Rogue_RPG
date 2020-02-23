#pragma once

#include "BaseItem.h"
#include <string>
using namespace std;

class Weapon : BaseItem {

	int weaponDamage;

	enum WeaponType {
		//Wizard weapons
		Staff,
		Wand,

		//Rogue Weapons
		Bow,
		DualBlades,

		//Warrior Weapons
		Hammer,
		Flail,
		Sword
	}m_weaponType;

public:

	Weapon(/*string weaponType,*/ int wdmg, string nm, string desc, int val)
		: BaseItem(val, nm, desc)
	{
		weaponDamage = wdmg;
	}
	~Weapon() {}

	int getWeaponDmg() {
		return weaponDamage;
	}
	void setWeaponDmg(int wdmg) {
		weaponDamage = wdmg;
	}
	WeaponType getWeaponType() {
		return m_weaponType;
	}
	void Use() override {}
};