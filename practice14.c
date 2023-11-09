#include <stdio.h>
#include <stdlib.h>

/*
 *More on malloc functions
 */


int main(void)
{
	int *tab;

	tab = malloc(sizeof(*tab) * 3);
	tab[0] = 500;
	tab[1] = -4596;
	tab[2] = 56;
	printf("%d, %d, %d\n", tab[0], tab[1], tab[2]);
	return(0);
}
