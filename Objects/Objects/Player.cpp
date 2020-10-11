#include "player.h"
#include "pch.cpp"

// default
player::player() {
	name = "Default";
}

// sets to the data given
player::player(string theName) {
	name = theName;
}

// function to greet
void player::Greet() {
	cout << "Hey there " << name << "!" << endl;
}

// player:: is a scope indicator, saying that player() belongs to another class