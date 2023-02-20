battlesystem : main.c character.o 
	clang -o battlesystem main.c character.o
character.o : character.h character.c 
	clang -include character.h -c character.c 	

