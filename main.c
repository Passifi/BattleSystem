#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 
#include "character.h" 
#include "utilites.h"
void printCharStats(Character chr);
int calculateDamage(Character chr1, Character chr2);
int main(void) {
	LinkedList list;
	list.head = NULL;
	addNode(&list, 12, "Sword of Death");
	addNode(&list, 13, "Dildo of Pleaasure");
	addNode(&list, 14, "The Final Bosses Penis");
	getAllNodes(list);
	printf("%s \n", list.head->name);
	srand(time(NULL));
	Character mainChar;
	initCharacter(&mainChar,"", Knight);
	int damages =0;
	for(int i=0;i<10;i++) {
		printf("Damage: %d\n",	calculateDamage(mainChar,mainChar));
	}
	return 0;

}

int calculateDamage(Character chr1, Character chr2) {
	int damageAccumulator =0;
	for(int i=0;i<chr1.strength;i++) {
		float attack = (float)chr1.attack * 1/(rand()%chr1.luck+1);
		if(attack > chr2.evasion)
			damageAccumulator += (int)attack;
	}
	
	if(chr2.defense < damageAccumulator) 
		return chr1.power * (rand()%chr1.luck) + 1;
	else 
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
