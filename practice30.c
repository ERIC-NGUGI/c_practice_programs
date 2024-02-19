#include <stdio.h>

int add(int a, int b)
{
	return a + b;
}

int main(void)
{
	int result;

	int (*ptr)(int, int) = add;

	result = ptr(10, 20);

	printf("%d \n", result);

	return (0);
}
