#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "utilites.h"
int currentId =0;

int computeStringHash(char* str) {

	int hashSum = 0;
	int index =0;
	while(str[index] != '\0') 
	{

		hashSum += str[index] * (int)pow(1.1,index);
		index++;	
	}
	return hashSum;
}


int getValueFromHash(HashTable* hash, char*name) 
{ 
	int index = computeStringHash(name)%SIZE_OF_HASHTABLE;
	getAllNodes(hash->list[index]);
	return 0;
}

void printNode(Node n) {
	printf("ID: %d\n", n.id);
	printf("Name: %s\n", n.name);
	printf("Value: %d\n", n.value);
	printf("Hashsum %d", computeStringHash(n.name));
}

void getAllNodes(LinkedList ls)
{

	Node *currentNode = ls.head;
	while(currentNode != NULL) 
	{

		printNode(*currentNode);
		currentNode = currentNode->next;
	}
}

void addToHash(HashTable* hash, int value, char*name) {
	int index = computeStringHash(name)%SIZE_OF_HASHTABLE;
	printf("Calculated index %d\n",index);
	
	addNode(&hash->list[index],value,name);


}

void addNode(LinkedList* list, int value, char* name) 
{
	Node *n = malloc(sizeof(Node));
	n->next = NULL;
	n->value = value;
	strcpy(n->name,name);
	if(list->head == NULL)
	{

		list->head = n;
		return;
	}
	Node * current = list->head;
	while(current->next != NULL) 
	{

		current = current->next;
	}

	current->next = n;
	return;
}


