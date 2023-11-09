#include <stdio.h>

int main (void)
{
	
	char c[] = "E, M, N";
	int d = 56;

	char x, y ,z;
	int age;
	char name[100];

	printf("Hello World\n");
	printf("This are my initials %s and this is my age %d\n", c, d);
	printf("Write your other initials and age to print:");
	scanf("%c%c%c%d", &x, &y, &z, &age);
	printf("This are my other initials %c, %c, %C, and my other age is %d\n", x, y, z, age);
	printf("Write your first name to print:");
	scanf("%s", name);
	printf("This is my first name %s\n", name);

	return(0);
}
