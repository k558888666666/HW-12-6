#include <stdio.h>
#include <stdlib.h>

void cubebyvalue(int *nptr)
{
	*nptr = *nptr * *nptr * *nptr;
}

int main()
{
	int number = 5;
	printf("the value of number is: %d\n", number);
	 cubebyvalue(&number);
	printf("the new value of number is: %d\n", number);

	system("pause");
	return 0;
}