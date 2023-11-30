#include <stdio.h>

/*
 * This is a program on printing 2d arrays
 *
 * */

int main(void)
{
	int arr[2][3] = {{1,2,3},{4,5,6}};

	int i, j;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", arr[i][j]);
		}
	}
	printf("\n");
	return (0);
}
