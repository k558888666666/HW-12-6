#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

void swap(int *element1Ptr, int *element2Ptr)
{
	int c;
	c = *element1Ptr;
	*element1Ptr = *element2Ptr;
	*element2Ptr = c;
}

void bubbleSort(int * const array, const int size)
{
	int c;
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				/*c = array[j];
				array[j] = array[j + 1];
				array[j + 1] = c;*/
			}
		}
	}
}


int main()
{
	int a[SIZE] = { 2,6,4,8,10,12,89,68,45,37 };
	printf("Data items in original order\n");
	for (int i = 0; i < SIZE; i++)
	{
		printf("%4d", a[i]);
	}
	bubbleSort(a, SIZE);

	printf("\nDate items in ascending order\n");
	for (int i = 0; i < SIZE; i++)
	{
		printf("%4d", a[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}
