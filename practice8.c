#include<stdio.h>

/*
 * program on how function parameters are passed by values
 */

void modif_my_parameter(int *m)
{
	printf("%p \n", m);
	printf("%p \n", &m);
	*m = 402;
}

int main(void)
{
	int n;
	int *p;

	n = 98;
	p = &n;

	printf("%d \n", n);
	printf("%p \n", &n);
	printf("%p \n", p);
	printf("%p \n", &p);

	modif_my_parameter(p);

	printf("%d \n", n);
	return (0);

}
