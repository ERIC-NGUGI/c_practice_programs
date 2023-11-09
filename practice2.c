#include <stdio.h>

/*
 *This is a program on do while loops
 */

int main(void)
{
	int a;
	printf("Write a number between 1 and 10 to get a print out of the remaining numbers until 10: \n");
	scanf("%d", &a);
	do{
		if (a <= 10){
			printf("%d,", a);
			a++;
		}else {
			printf("Please use the numbers between 0 and 10");
		}
	}while(a <= 10);
	printf("\n");

	return(0);
}
