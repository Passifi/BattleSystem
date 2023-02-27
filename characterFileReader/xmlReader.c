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
	char currentValue[255];
	bool openKey = false;
	bool loadingValue = false;
	int c;
	int keyIndex = 0;
	int valueIndex = 0;
	do {
		c = fgetc(file);
		if(!loadingValue && c == '<') 
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
				if(openKey) 
					loadingValue=true;
				openKey=false;
				valueIndex = 0;

			}
			currentKey[keyIndex++] = c; 
				

		}
		else if(loadingValue) 
		{
			if(c != '<')
				currentValue[valueIndex++] = c;
			else
			{
				currentValue[valueIndex] = '\0';
				printf("Current Value %s\n", currentValue);
				openKey = true;
				loadingValue =false; 

			}
			
		}

	} while (c != EOF);

}

int main(void) {

	loadCharacter();

	return 0;

}




