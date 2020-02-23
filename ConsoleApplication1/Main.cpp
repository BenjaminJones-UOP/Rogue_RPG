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

	Character *characterPtr;

	Armour startArmour(10,10,"Start Armour", "Start Armour desc", 10);
	Weapon startWeapon( 10, "Start Weapon", "Start Weapon desc", 10);

	Player player1(1,2,4,10,3,2,3,0,startArmour, startWeapon);

	Enemy enemy1(1,1,5,5,30,4,5,6);

	std::cout << "Enemy Health: " << enemy1.getHealth() << std::endl;
	characterPtr = &enemy1;
	player1.Attack(*characterPtr);
	std::cout << "Enemy Health after attack: " << enemy1.getHealth() << std::endl;

	return 0;
}