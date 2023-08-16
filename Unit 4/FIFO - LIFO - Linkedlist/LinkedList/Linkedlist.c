
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


int LinkedList_Is_Full (LinkedList_t *pl)
{
	if(!pl)
		return LINKEDLIST_NULL;
	return 0;
}


int LinkedList_Size (LinkedList_t *pl)
{
	return pl->size;
}


Linkedlist_statue LinkedList_Destroy (LinkedList_t *pl)
{
	if(!pl)
		return LINKEDLIST_NULL;

	if(LinkedList_Is_Empty(pl))
		return LINKEDLIST_EMPTY;

	while(pl->head)
	{
		SDataNode* temp = pl->head;
		pl->head = pl->head->next;
		free(temp);
	}
	pl->size = 0;

	return LINKEDLIST_NO_ERROR;
}
