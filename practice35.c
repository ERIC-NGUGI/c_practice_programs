#include <stdio.h>

/*
 * A simple program to write text using the file input and output processes.
 *
 * */

int main(void)
{
	FILE *fp;

	fp = fopen("filename.txt", "w");

	fprintf(fp, "%s", "Hello world");

	fclose(fp);

	return (0);
}
