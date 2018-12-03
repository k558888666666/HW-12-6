#include <stdio.h>
#include <stdlib.h>

int main()
{
	int b[] = { 10,20,30,40 };
	//int *bptr = b;
	int *bptr;
	bptr = &b;
	for ( int i = 0; i < 4; i++)
	{
		printf("b[%d] = %d\n",i,b[i]);
	}
	printf("\n");
	for (int i = 0; i < 4; i++)
	{
		printf("*(b+%d) = %d\n", i, *(b+i));
	}
	printf("\n");
	for (int i = 0; i < 4; i++)
	{
		printf("bptr[%d] = %d\n", i, bptr[i]);
	}
	printf("\n");
	for (int i = 0; i < 4; i++)
	{
		printf("*(bptr+%d) = %d\n", i, *(bptr + i));
	}


	
	system("pause");
	return 0;
}
