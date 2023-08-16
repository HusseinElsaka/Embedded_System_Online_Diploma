

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

#include <stdlib.h>
#include "Linkedlist_Cfg.h"


typedef struct {
	List_Element_Type entry;
	struct SDataNode *next;
}SDataNode;

typedef struct {
	SDataNode *head;
	int size;
}LinkedList_t;

typedef enum
{
	LINKEDLIST_NO_ERROR,
	LINKEDLIST_NULL,
	LINKEDLIST_MEMORY_ERROR,
	LINKEDLIST_EMPTY,
	LINKEDLIST_INNER_LOOP,
	LINKEDLIST_NO_INNER_LOOP,
	LINKEDLIST_OUT_OF_INDEX
}Linkedlist_statue;


Linkedlist_statue LinkedList_Init (LinkedList_t *pl);


int LinkedList_Is_Empty (LinkedList_t *pl);


#endif /* LINKEDLIST_H_ */
