#include<stdio.h>

/*
 *This is a program about pointers and dereferencing
 */

int main(void)
{
	int x;
	int *y;

	char a;
	char *b;

	a = 'J';
	b = &a;

	x = 120;
	y = &x;

	printf("%d(%c)\n", a, a);
	printf("%p \n", &a);
	printf("%p \n", b);

	printf("%d \n", x);
	printf("%p \n", &x);
	printf("%p \n", y);

	*b = 'C';
	*y = 130;

	printf("%d(%c)\n", a, a);
	printf("%d \n", x);

	return (0);

}
