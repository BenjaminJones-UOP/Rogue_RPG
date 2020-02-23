#pragma once

#include <string>
using namespace std;

#include <iostream>

class BaseItem {

	//armour, weapon and items

	int value;
	string name;
	string description;

public:
	BaseItem(int val, string nm, string desc) { //If an item is needing to be created with values
		value = val;
		name = nm;
		description = desc;
	}
	~BaseItem() {};

	virtual void Use() = 0;

	void Examine() {
		std::cout << getDescription() << std::endl;
	};

	int getValue() {
		return value;
	}
	void setValue(int newValue) {
		value = newValue;
	}

	string getName() {
		return name;
	}
	void setName(string newName) {
		name = newName;
	}

	string getDescription() {
		return description;
	}
	void setDescription(string newDesc) {
		description = newDesc;
	}

};