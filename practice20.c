#include <stdio.h>

/*
 * more on factorial
 */

int main(void)
{
	int x;
	do
	{
		printf("Input a number to get its factorial: ");
		scanf("%d", &x);

		int i = 1;
		int result = 1;
		printf("!%d: ", x);

		while(i <= x)
		{
			result *= i;
			if (i < x)
			{
				printf("%d * ", i);
			} else 
			{
				printf("%d = ", i);
			}
			i++;
		}
		printf("%d \n", result);
	}while(x != 0);

	return (0);
}
