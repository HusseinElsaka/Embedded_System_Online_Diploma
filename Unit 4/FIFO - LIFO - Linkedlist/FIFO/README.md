# Test Code
```c
#include <stdio.h>
#include <stdlib.h>
#include "FIFO.h"



void Display (FIFO_ELEMENT_TYPE element)
{
	printf("%d\t", element);
}

int main ()
{
	int i, temp = 0;
	FIFO_ELEMENT_TYPE bufferElements[50];
	FIFO_Buff_t buffer1;
	if(!FIFO_Init(&buffer1, bufferElements, 5))
		printf("FIFO success Initialization\n");
	else
		printf("FIFO failed Initialization\n");
	for(i = 1; i < 8; i++)
	{
		switch(FIFO_Enqueue(&buffer1, i))
		{
		case FIFO_NO_ERROR:
			printf("success Enqueue %d\n", i);
			break;
		case FIFO_FULL:
			printf("FIFO FULL\n");
			break;
		case FIFO_EMPTY:
			printf("FIFO EMPTY\n");
			break;
		case FIFO_NULL:
			printf("FIFO Is Null\n");
			break;
		}
	}
	printf("buffer is  : ");
	FIFO_Traverse(&buffer1, Display);
	printf("\n");

	for(i = 1; i < 3; i++)
	{
		switch(FIFO_Dequeue(&buffer1, &temp))
		{
		case FIFO_NO_ERROR:
			printf("success Dequeue %d\n", temp);
			break;
		case FIFO_FULL:
			printf("FIFO FULL\n");
			break;
		case FIFO_EMPTY:
			printf("FIFO EMPTY\n");
			break;
		case FIFO_NULL:
			printf("FIFO Is Null\n");
			break;
		}
	}

	printf("buffer is  : ");
	FIFO_Traverse(&buffer1, Display);
	printf("\n");
	printf("buffer size  :  %d \n", FIFO_Size(&buffer1));

	FIFO_Clear(&buffer1);
	printf("buffer is  : ");
	FIFO_Traverse(&buffer1, Display);
	printf("\n");

	for(i = 1; i < 3; i++)
	{
		switch(FIFO_Dequeue(&buffer1, &temp))
		{
		case FIFO_NO_ERROR:
			printf("success Dequeue %d\n", temp);
			break;
		case FIFO_FULL:
			printf("FIFO FULL\n");
			break;
		case FIFO_EMPTY:
			printf("FIFO EMPTY\n");
			break;
		case FIFO_NULL:
			printf("FIFO Is Null\n");
			break;
		}
	}


	return 0;
}

```
# Picture
![image](https://github.com/HusseinElsaka/Embedded_System_Online_Diploma/assets/52578649/442bef21-7067-4b27-b5f5-aa237b22c303)
