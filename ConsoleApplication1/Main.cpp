#include "pch.h"
#include <iostream>    

#include "Enemy.h"
#include "Player.h"

//Divinity combat as a text-based game
//3 people as player controlled
//three actions - attack, abilities and spells
//Starting classes - Warrior, Rogue and Wizard
//Level up into different classes are the same

//Floor
//Binding of isaac in terms of floors
//Randomly create floors
//Floors have rooms
//Rooms can be enemies, nothing, items or abilities
//Different theme for each floor with different enemies
//For example, first floor currently Imps and goblins

//Rooms
//Enemies increase in stats as floors increase
//Test Names: Eyegor, Minotaur, Gorgon, Korrigan, Hippogryph
//Max of three enemies per room
//Attack, abilities and spells same as player can; different for enemies for flavour

//Classes: 
//Characters -> Player, Enemy
//Item -> Weapon, Armour, Potion
//Room, has characters in it -> Battle room, Nothing room, Ability room or Item room
//Floor, has rooms in it
//Game, has floors in it

int main() {

	unique_ptr<Player> player1(new Player(1,2,4,10,3,2,3,0));

	cout << player1->getAttackPwr() << endl;

	return 0;
}
