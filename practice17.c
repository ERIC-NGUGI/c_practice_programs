#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * More on malloc functions
 *
 * This program will print a string about the quick brown fox
 *
 */

int main(void)
{
	char *s;
	s = malloc(sizeof(char) * 50);

	if (s == NULL)
	{
		printf("Memory not available");
		exit (1);
	}

	// strcpy is used to copy the string to the allocated memory
	strcpy(s, "The quick brown fox jumped over the lazy dog \0");
	printf("%s \n", s);

	free (s);
	return (0);
}
