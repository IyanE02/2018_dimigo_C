#include <stdio.h>
void circle_size(double r)
{
	printf("%.2lf", 3.14*r*r);
}

int main()
{
	double n;
	scanf("%lf", &n);
	circle_size(n);
	return 0;
}