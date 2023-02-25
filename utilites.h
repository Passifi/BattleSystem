#ifndef UTILITIES_H
#define UTILITIES_H
#include <stdio.h> 
#include <stdlib.h> 
#define SIZE_OF_HASHTABLE 1024
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
	LinkedList *list;
} typedef HashTable;

void addToHash(HashTable* hash, int value, char*name); 
int getValueFromHash(HashTable* hash, char*name);

#endif
