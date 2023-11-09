#include<stdio.h>

/*
 * Another recursive program for getting the factorial of a number
 */

int fact(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return n * fact(n - 1);
	}
}

int main(void)
{
	int n;
	printf("Input a number to get its factorial: ");
	scanf("%d", &n);
	printf("The factorial of %d is %d \n", n, fact(n));

	return (0);
}
