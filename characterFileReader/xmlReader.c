#include <stdio.h>
#include <stdlib.h> 
#include <stdbool.h>


FILE * openFile(char* path) {

	FILE *file = fopen(path, "r");

	return file;

}

void loadCharacter() {
	FILE *file = openFile("character.txt");
	char currentKey[255];
	bool openKey = false;
	int c;
	int keyIndex = 0;
	do {
		c = fgetc(file);
		if(c == '<') 
		{
			openKey = true;
			keyIndex = 0;
			continue;
		}
		if(openKey)
		{
			if(c == '/')
			{
				openKey = false;
				while(c != '>')
					c = fgetc(file);
				continue;
			}
			else if (c == '>') 
			{
				currentKey[keyIndex] = '\0';
				printf("%s\n", currentKey);
			}
			currentKey[keyIndex++] = c; 
				

		}

	} while (c != EOF);

}

int main(void) {

	loadCharacter();

	return 0;

}




