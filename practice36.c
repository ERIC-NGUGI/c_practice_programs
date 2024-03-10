#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fileName;
	char c[200];

	fileName = fopen("filename.txt", "r");

	printf("%s\n", fgets(c, 200, fileName));

	fclose(fileName);

	return (0);


}
