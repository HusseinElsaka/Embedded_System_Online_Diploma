
#include "Linkedlist.h"

Linkedlist_statue LinkedList_Init (LinkedList_t *pl)
{

	pl->head = NULL;
	pl->size = 0;

	return LINKEDLIST_NO_ERROR;
}


int LinkedList_Is_Empty (LinkedList_t *pl)
{
	return pl->size == 0;
}


