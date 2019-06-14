#include <stdio.h>

typedef struct CarInfo
{
	char name[30];
	double dus;
	int km;
} car;

int main()
{
	car car;
	scanf("%s %lf %d", car.name, &car.dus, &car.km);
	printf("%.2lf", (double)car.km / car.dus);
	return 0;
}