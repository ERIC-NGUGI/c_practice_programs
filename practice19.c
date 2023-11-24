#include <stdio.h>


/*
 * This is a practice program on conditional statements using if else and switch
 *
 * */

/*int main(void)
{
	int x = 2;
	 if (x == 1)
	 {
		printf("x is 1\n");
	 }
	 else if (x == 2)
	 {
		printf("x is 2\n");
	 }
	 else if (x == 3)
	 {
		printf("x is 3\n");
	 }
	 else
	 {
		printf("x is not 1 2 or 3\n");
	 }

	 return (0);
}*/

/*using switch*/

int main(void)
{
	int x;
	printf("please write a number between 1 and 3: ");
	scanf("%d", &x);

	switch(x)
	{
		case 1 : printf("x is 1\n");
			break;
		case 2 : printf("x is 2\n");
			break;
		case 3 : printf("x is 3\n");
			break;
		default : printf("x is neither 1 2 or 3\n");
	}
	return (0);
}
