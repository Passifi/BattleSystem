#ifndef UTILITIES_H
#define UTILITIES_H
#include <stdio.h> 
#include <stdlib.h> 

typedef struct Node {
	char name[255];
	int value;
	int id;
	struct Node* next;

} Node;

typedef struct LinkedList {
	Node* head; 
} LinkedList;

void addNode(LinkedList* list, int value, char* name); 

void printNode(Node n);

void getAllNodes(LinkedList ls);

int computeStringHash(char* str);







struct HashTable {
} typedef HashTable;

#endif
