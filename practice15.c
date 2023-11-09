#include <stdio.h>
#include <stdlib.h>

/*
 * This is a program about the function free.
 *
 * The free function frees the memory space which have been allocated by a p   revious call to malloc. You should always free all malloced memory.
 *
 */

void m(int n0, int n1, int n2)
{
	int *t;
	int sum;

	t = malloc(sizeof(int) * 3);
	t[0] = n0;
	t[1] = n1;
	t[2] = n2;

	sum = t[0] + t[1] + t[2];
	printf("%d + %d + %d = %d \n", t[0], t[1], t[2], sum);
	free(t);
}

int main(void)
{
	m(300,300,300);
	return (0);
}
