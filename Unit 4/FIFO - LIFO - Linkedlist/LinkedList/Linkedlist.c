
#include "Linkedlist.h"

Linkedlist_statue LinkedList_Init (LinkedList_t *pl)
{

	pl->head = NULL;
	pl->size = 0;

	return LINKEDLIST_NO_ERROR;
}
