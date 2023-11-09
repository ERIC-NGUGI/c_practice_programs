#include <stdio.h>

/*
 * This is a program on the indirect type of recursion
 */

void odd();
void even();
int n = 1;

void odd()
{
	if (n <= 10)
	{
		printf("%d ", n + 1);
		n++;
		even();
	}
	return;
}

void even()
{
	if (n <= 10)
	{
		printf("%d ", n - 1);
		n++;
		odd();
	}
	return;
}

int main(void)
{
	odd();
	printf("\n");
	return(0);
}
