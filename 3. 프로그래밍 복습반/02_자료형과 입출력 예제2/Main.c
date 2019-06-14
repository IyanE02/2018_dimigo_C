#include <stdio.h>
int main()
{
	double a;
	scanf("%lf", &a);
	printf("%.1lf\n%.2lf\n%.3lf", a, a, a);
	return 0;
}