battlesystem : main.c character.o utilites.o
	clang -o battlesystem main.c character.o utilites.o
character.o : character.h character.c 
	clang -include character.h -c character.c 	
utilites.o : utilites.h utilites.c
	clang -include utilites.h -c utilites.c
