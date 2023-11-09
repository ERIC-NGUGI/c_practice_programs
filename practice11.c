#include <stdio.h>

/*
 * A program on non tail recursion
 */

int fun(int n)
{
	if(n == 1)
	{
		return 0;
	}
	else
	{
		return 1 + fun(n/2);
	}
}
int main(void)
{
	printf("%d \n", fun(8));
	return (0);
}
