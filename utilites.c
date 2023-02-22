#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utilites.h"


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


