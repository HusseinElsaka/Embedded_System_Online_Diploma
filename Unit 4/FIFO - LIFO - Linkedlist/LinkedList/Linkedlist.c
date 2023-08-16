
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


Linkedlist_statue LinkedList_Insert (LinkedList_t *pl, unsigned int position, List_Element_Type e)
{
	if(!pl)
		return LINKEDLIST_NULL;

	if(position > pl->size)
		return LINKEDLIST_OUT_OF_INDEX;

	SDataNode* NewElement = (SDataNode*) malloc(sizeof(SDataNode));

	if(!NewElement)
		return LINKEDLIST_MEMORY_ERROR;

	NewElement->entry = e;
	NewElement->next = NULL;

	if(position == 0)
	{
		NewElement->next = pl->head;
		pl->head = NewElement;
	}
	else
	{
		int i;
		SDataNode* temp;

		for(i = 0,temp = pl->head; i < position - 1; i++)
		{
			temp = temp->next;
		}

		NewElement->next = temp->next;
		temp->next = NewElement;
	}
	pl->size ++;

	return LINKEDLIST_NO_ERROR;
}


Linkedlist_statue LinkedList_Delete(LinkedList_t *pl, unsigned int position, List_Element_Type *pe)
{
	if(!pl)
		return LINKEDLIST_NULL;

	if(LinkedList_Is_Empty(pl))
		return LINKEDLIST_EMPTY;

	if(position >= pl->size)
		return LINKEDLIST_OUT_OF_INDEX;

	SDataNode *current, *perv;
	int i;

	if(position == 0)
	{
		*pe = (pl->head->entry);
		current = pl->head;
		pl->head = pl->head->next;
		free(current);
	}
	else
	{
		for(i = 0, current = pl->head; i < position - 1; i++)
		{
			current = current->next;
		}
		perv = current;
		current = current->next;
		perv->next = current->next;
		free(current);
	}
	pl->size --;


	return LINKEDLIST_NO_ERROR;
}


Linkedlist_statue LinkedList_Traverse (LinkedList_t* pl, void (*pf) (List_Element_Type* e) )
{
	if(!pl)
		return LINKEDLIST_NULL;

	if(LinkedList_Is_Empty(pl))
		return LINKEDLIST_EMPTY;

	SDataNode* temp;
	for(temp = pl->head; temp ; temp = temp->next)
	{
		(*pf)(&(temp->entry));
	}

	return LINKEDLIST_NO_ERROR;

}


Linkedlist_statue LinkedList_RetrieveList (LinkedList_t *pl, unsigned int position, List_Element_Type *pe)
{
	if(!pl)
		return LINKEDLIST_NULL;

	if(LinkedList_Is_Empty(pl))
		return LINKEDLIST_EMPTY;

	if(position >= pl->size)
		return LINKEDLIST_OUT_OF_INDEX;

	int i;
	SDataNode* temp;

	for(i = 0,temp = pl->head; i < position; i++)
	{
		if(!temp)
			return LINKEDLIST_NULL;

		temp = temp->next;
	}
	*pe = (temp->entry);


	return LINKEDLIST_NO_ERROR;
}


