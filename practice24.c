#include <stdio.h>

/*
 * a program that reads a 5 x 5 array of integers and then prints the row sum and column sum.
 */

int main(void)
{
	int i, j;
	int sum = 0;
	int arr[5][5] = {{8, 3, 9, 0, 10},
			{3, 5, 17, 1, 1},
			{2, 8, 6, 23, 1},
			{15, 7, 3, 2, 9 },
			{6, 14, 2, 6, 0}
			};

	printf("Row total: ");
	for (i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
		{
		//	printf("%d ", arr[i][j]);
			sum += arr[i][j];
		}
		printf("%d ", sum);
		sum = 0;
	}
	printf("\n");

	printf("column total: ");
	for(j = 0; j < 5; j++)
	{
		for (i = 0; i < 5; i++)
		{
			sum += arr[i][j];
		}
		printf("%d ", sum);
		sum = 0;
	}
	printf("\n");
	return (0);
}
