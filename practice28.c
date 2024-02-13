#include <stdio.h>

struct car
{
	int fuel_tank_cap;
	int seating_cap;
	float mileage_cap;
};

int main(void)
{
	struct car c[2];

	int i;

	for (i = 0; i < 2; i++)
	{
		printf("Enter the car %d fuel tank capacity: \n", i + 1);
		scanf("%d", &c[i].fuel_tank_cap);

		printf("Enter the car %d seating capacity: \n", i + 1);
		scanf("%d", &c[i].seating_cap);

		printf("Enter the car %d mileage capacity: \n", i + 1);
		scanf("%f", &c[i].mileage_cap);
	}
	printf("\n");

	for (i = 0; i < 2; i++)
	{
		printf("\n car %d details: \n", i + 1);
		printf("fuel tank capacity %d: \n", c[i].fuel_tank_cap);
		printf("seating capcity %d: \n", c[i].seating_cap);
		printf("city mileage %f: \n", c[i].mileage_cap);
	}
	return (0);
}
