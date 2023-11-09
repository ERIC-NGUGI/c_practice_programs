#include <stdio.h>

/*
 * A recursion program that prints a string
 */

void strang(char *n)
{
	if (*n != '\0')
	{
		printf("%c", *n);
		strang(n + 1);
	}
	else 
	{
		printf("\n");
	}
}

int main(voic)
{
	strang("ERIC MWENJA");
	return(0);
}
