#pragma once

#include <string>
using namespace std;

class Move
{
	string moveName;
	string moveDescription;
	string moveEffect;
	int abilityModifier;

	bool isSpell;

public:
	Move() {};
	~Move() {};

	enum MoveType {
		StunningTap,
		BackStab,
		Cloak,
		StunBomb,
		Cadaceus,
		Fireball,
		IceShard,
		Weaken,
		VineWhip,
		Quake
	}abilitytype;

	void useAbility() {

	}

	void chooseAbility(MoveType abilityType) {
		switch (abilityType) {
		case StunningTap:
			moveName = "Stunning Tap";
			moveDescription = "A weak accurate tap to stun an enemy, Deals 0.5x attack damage";
			isSpell = 0;
			break;

		case BackStab:
			moveName = "Back Stab";
			moveDescription = "Stab an enemy in the back to deal 2x attack damage";
			isSpell = 0;
			break;

		case Cloak:
			moveName = "Cloak";
			moveDescription = "Take half damage for this turn";
			isSpell = 0;
			break;

		case StunBomb:
			moveName = "Stun Bomb";
			moveDescription = "Deal 0.1x damage and stun an enemy";
			isSpell = 0;
			break;

		case Cadaceus:
			moveName = "Cadaceus";
			moveDescription = "Restore 3x magic power as health";
			isSpell = 0;
			break;

		case Fireball:
			moveName = "Fire Ball";
			moveDescription = "Deal 0.5x spell damage to all enemies";
			isSpell = 1;
			break;

		case IceShard:
			moveName = "Ice Shard";
			moveDescription = "Deal 1x spell damage and stun an enemy";
			isSpell = 1;
			break;

		case Weaken:
			moveName = "Weaken";
			moveDescription = "Target takes double damage for this turn";
			isSpell = 1;
			break;

		case VineWhip:
			moveName = "Vine Whip";
			moveDescription = "Deal 2x spell damage";
			isSpell = 1;
			break;

		case Quake:
			moveName = "Quake";
			moveDescription = "Deal 0.1x spell damage and stun all enemies";
			isSpell = 1;
			break;
		}
	}

	string getName(){
		return moveName;
	}
	string displayAbility() {
		return moveDescription;
	}
};