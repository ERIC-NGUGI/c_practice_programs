#include<stdio.h>
#include<stdlib.h>

/*
 * This is another example of a program that utilizes the malloc function.
 *
 * This program will ask the user to input the number of integers and the number of values correspondint to the integer number.
 *
 */

int main(void)
{
	int i, n;
	printf("Enter the number of integers: ");
	scanf("%d", &n);
	int *ptr = (int *)malloc(n*(sizeof(int)));

	if(ptr == NULL)
	{
		printf("Memory not available");
		exit(1);
	}

	for(i = 0; i < n; i++)
	{
		printf("Enter an integer: ");
		scanf("%d", ptr + i);
	}
	for(i = 0; i < n; i++)
		printf("%d ", *(ptr + i));
	
	printf("\n");
	return (0);
}
