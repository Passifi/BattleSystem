#ifndef CHARACTER_H
#define CHARACTER_H
struct Character {
	char* name;
	int strength; // how many attacks 
	int attack; // how much damage
	int power; // how much is accumalated per attack
	int health;
	int defense;
	int evasion; 
	int luck;
	int wit;
	int intelligence;
	int memory;

	// equpiment
	// you will need to implement a hash function for this one first...	
} typedef Character; 

enum Class {
	
	Knight, Marauder, Freeman, Hexer, Mage

};

void initCharacter(Character *character,char* name, int type ); 
#endif
