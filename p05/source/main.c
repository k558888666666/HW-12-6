#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a=7;
	int *ptr = &a;
	//int *ptr;              ptr = &a;
	
	printf("The address of a is: %p \n The value of ptr is: %p\n", &a ,ptr);
	printf("The value of a is: %d \n The value of *ptr is: %d\n", a, *ptr);
	printf("The &*ptr is: %p \n The *&ptr is: %p\n", &*ptr, *&ptr);
	system("pause");
	return 0;
}