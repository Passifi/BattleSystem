#ifndef UTILITIES_H
#define UTILITIES_H
#include <stdio.h> 
#include <stdlib.h> 

typedef struct Node {
	char name[255];
	int value;
	struct Node* next;

} Node;

typedef struct LinkedList {
	Node* head; 
} LinkedList;

void addNode(LinkedList* list, int value, char* name); 

struct HashTable {
} typedef HashTable;

#endif
