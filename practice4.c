#include <stdio.h>
#include "header.h"

/*
 * A program to print my name
 */

int main(void)
{
	const char* theName = myName();
	printf("My name is %s\n", theName);
	return(0);
}
