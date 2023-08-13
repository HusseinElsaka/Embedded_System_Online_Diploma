# Test Code
```c
#include <stdio.h>
#include <stdlib.h>
#include "LIFO.h"



void Display (LIFO_ELEMENT_TYPE element)
{
	printf("%d\t", element);
}

int main ()
{
	int i, temp = 0;
	LIFO_ELEMENT_TYPE bufferElements[50];
	LIFO_Buff_t buffer1;
	if(!LIFO_Init(&buffer1, bufferElements, 5))
		printf("LIFO success Initialization\n");
	else
		printf("LIFO failed Initialization\n");
	for(i = 1; i < 8; i++)
	{
		switch(LIFO_Push(&buffer1, i))
		{
		case LIFO_NO_ERROR:
			printf("success Push %d\n", i);
			break;
		case LIFO_FULL:
			printf("LIFO FULL\n");
			break;
		case LIFO_EMPTY:
			printf("LIFO EMPTY\n");
			break;
		case LIFO_NULL:
			printf("LIFO Is Null\n");
			break;
		}
	}
	printf("buffer is  : ");
	LIFO_traverse(&buffer1, Display);
	printf("\n");

	for(i = 1; i < 3; i++)
	{
		switch(LIFO_Pop(&buffer1, &temp))
		{
		case LIFO_NO_ERROR:
			printf("success Pop %d\n", temp);
			break;
		case LIFO_FULL:
			printf("LIFO FULL\n");
			break;
		case LIFO_EMPTY:
			printf("LIFO EMPTY\n");
			break;
		case LIFO_NULL:
			printf("LIFO Is Null\n");
			break;
		}
	}

	printf("buffer is  : ");
	LIFO_traverse(&buffer1, Display);
	printf("\n");
	LIFO_Top(&buffer1, &temp);
	printf("buffer top  :  %d \n", temp);
	printf("buffer size  :  %d \n", LIFO_Size(&buffer1));

	LIFO_clear(&buffer1);
	printf("buffer is  : ");
	LIFO_traverse(&buffer1, Display);
	printf("\n");

	for(i = 1; i < 3; i++)
	{
		switch(LIFO_Pop(&buffer1, &temp))
		{
		case LIFO_NO_ERROR:
			printf("success Pop %d\n", temp);
			break;
		case LIFO_FULL:
			printf("LIFO FULL\n");
			break;
		case LIFO_EMPTY:
			printf("LIFO EMPTY\n");
			break;
		case LIFO_NULL:
			printf("LIFO Is Null\n");
			break;
		}
	}


	return 0;
}

```
# Picture
![image](https://github.com/HusseinElsaka/Embedded_System_Online_Diploma/assets/52578649/b594e052-668b-4bba-9f73-0b65c01f74e7)
