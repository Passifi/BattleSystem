#include "character.h"

void initCharacter(Character *character,char* name, int type ) {
	character->name = "Jack the Great";
	switch(type) {
		case Knight:
			character->strength = 5;
			character->attack = 12;
			character->power = 4;
			character->health = 130;
			character->defense = 15;
			character->evasion = 3;
			character->luck = 5;
			character->wit = 7;
			character->intelligence = 8;
			character->memory = 8;
			break;
		case Marauder:
	                      	character->strength = 8;
                              	character->attack = 10;
                              	character->power = 8;
                             	character->health = 120;
	                      	character->defense = 12;
                              	character->evasion = 7;
                             	character->luck = 8;
                              	character->wit = 5;
                              	character->intelligence = 5;
                              	character->memory = 3;
                              	break;
		case Freeman:
	                      	character->strength = 5;	
                              	character->attack = 12;
                              	character->power = 6;
                             	character->health = 112;
	                      	character->defense = 8;
                              	character->evasion = 14;
                             	character->luck = 12;
                              	character->wit = 12;
                              	character->intelligence = 10;
                              	character->memory = 9;
                              	break;

	}

}
