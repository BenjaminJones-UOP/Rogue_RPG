#pragma once

#include "BaseItem.h"
#include <string>
using namespace std;

class Armour : BaseItem {

	int defensePoints;
	int magicDefensePoints;

public:

	Armour(int defPts, int magDefPts, string nm, string desc, int val) 
		: BaseItem(0, nm, desc)
	{
		setDefensePoints(defPts);
		setMagicDefensePoints(magDefPts);
		setName(nm);
		setDescription(desc);
		setValue(val);
	}
	~Armour() {}

	int getDefensePoints() {
		return defensePoints;
	}
	void setDefensePoints(int defPts) {
		defensePoints = defPts;
	}
	int getMagicDefensePoints() {
		return magicDefensePoints;
	}
	void setMagicDefensePoints(int magDefPts) {
		magicDefensePoints = magDefPts;
	}
	void Use() override {}
};