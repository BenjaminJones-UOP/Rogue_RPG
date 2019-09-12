#include "pch.h"
#include <iostream>    

#include "Enemy.h"
#include "Player.h"

//Divinity combat as a text-based game
//3 people as player controlled
//three actions - attack, abilities and spells
//Starting classes - Warrior, Rogue and Wizard
//Level up into different classes are the same

//Binding of isaac in terms of floors
//Randomly create floors
//Floors have rooms
//Rooms can be enemies, nothing, items or abilities

//Enemies increase in stats as floors increase
//Names: Eyegor, Minotaur, Gorgon, Korrigan, Hippogryph
//Max of three enemies per room
//Attack, abilities and spells same as player

//Classes: 
//Characters -> Player, Enemy
//Item -> Weapon, Armour, Potion
//Room, has characters in it -> Battle room, Nothing room, Ability room or Item room
//Floor, has rooms in it
//Game, has floors in it

int main() {

	Player player1(0, 0, 4, 0, 0, 0, 0);

	cout << player1.getAttackPwr() << endl;

	return 0;
}
