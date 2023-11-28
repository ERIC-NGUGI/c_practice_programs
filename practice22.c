#include <stdio.h>

/*
 * A program that checks whether a digit in a number appears more than once
 */

int main(void)
{
	int seen[10] = {0};
	int N;
	printf("Write a number: ");
	scanf("%d", &N);

	int rem;
	while (N > 0)
	{
		rem = N % 10;
		if (seen[rem] == 1)
		{
			break;
		}
		seen[rem] = 1;
		N = N/10;
	}
	if (N > 0)
	{
		printf("Yes \n%d \n", N);
	} else 
	{
		printf("No \n");
	}
	return (0);
}
