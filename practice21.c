#include <stdio.h>

/*
 * This is a program on loop control statements break and contine.
 */

// A practice program using break
/*
int main(void)
{
	int n;
	printf("Write a number: ");
	scanf("%d", &n);

	while (n!= 0)
	{
		if (n < 0)
		{
			break;
		}else
		{
			printf("Write a number: ");
			scanf("%d", &n);
		}
	}
	return (0);
}
*/

// This is a practice program on using continue
// This program prints odd numbers between 1 and 20
/*
int main(void)
{
	int i, n = 2;

	for(i = 1; i <= 20; i++)
	{
		if (i == n)
		{
			n += 2;
			continue;
		}
		printf("%d ", i);
	}
	printf("\n");
	return (0);
}
*/
//Another example of using continue
//This program prints even numbers between 1 and 20

int main(void)
{
	int i, n = 1;
	for(i = 0; i <= 20; i++)
	{
		if (i == n)
		{
			n += 2;
			continue;
		}
		printf("%d ",i);
	}
	printf("\n");
	return (0);
}
