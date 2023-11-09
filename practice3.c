#include <stdio.h>
#include "header.h"

/*
 * The main program on getting the area of a rectangle
 */

int main(void)
{
	int l, w;
	printf("Please write your length and width to get your area: ");
	scanf("%d%d", &l, &w);

	int rectArea = area(l, w);
	printf("Result: %d\n", rectArea);

	return (0);
}
