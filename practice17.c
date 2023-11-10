#include <stdio.h>
#include <stdlib.h>

/*
 * More on malloc functions
 *
 * This program will print a string about the quick brown fox
 *
 */

int main(void)
{
	char *s;
	s = malloc(sizeof(char) * 10);
	s[9] = "The quick brown fox jumped over the lazy dog \0";
	printf("%s", s);
	return (0);
}
