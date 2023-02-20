#include <stdio.h>
#include <stdlib.h> 
#include "character.h" 
void printCharStats(Character chr);

int main(void) {
	
	Character mainChar;
	initCharacter(&mainChar,"", Knight);

	printCharStats(mainChar);

	return 0;

}

void printCharStats(Character chr) 
{
	printf("Strength: %d\n", chr.strength);
	printf("Attack: %d\n", chr.attack);
	printf("Power: %d\n", chr.power);
	printf("Health: %d\n", chr.health);
	printf("Defense: %d\n", chr.defense);
	printf("Evasion: %d\n", chr.evasion);
	printf("Intelligence: %d\n", chr.intelligence);
	printf("Wit: %d\n", chr.wit);
	
}
