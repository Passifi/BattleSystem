battlesystem : main.c character.o utilites.o
	clang -lm -o battlesystem main.c character.o utilites.o
character.o : character.h character.c 
	clang -lm -include character.h -c character.c 	
utilites.o : utilites.h utilites.c
	clang -lm -include utilites.h -c utilites.c
