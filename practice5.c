#include <stdio.h>


/*
 * A program on recursions
 */

int fun(int n)
{
	if(n == 0){
		return 1;
	}else {
		return 7 + fun(n - 2);
	}
}

int main(void)
{
	int n = 4;
	printf("%d\n", fun(n));
	return(0);
}
