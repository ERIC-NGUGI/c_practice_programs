#include <stdio.h>
#include <stdlib.h>

/*
 * A program to practice on memory allocation
 * 
 * The malloc function allocates a specific number of bytes in memory and returns a pointer to the allocated memory.This memory will have read and write permissions
 *
 */

int main(void)
{
	char *str;
	str = malloc(sizeof(char) * 3);
	str[0] = 'o';
	str[1] = 'k';
	str[2] = '\0';
	printf("%s\n", str);
	return (0);
}
