#include <stdio.h>

/*
 * This is a program that shows tail recursion
 */

void fun(int n)
{
	if (n == 0)
	{
		return ;
	}
	else
	{
		printf("%d ", n);
		return fun(n - 1);
	}
}

int main(void)
{
	int a = 3;
	fun(a);
	printf("\n");
	return 0;
}
