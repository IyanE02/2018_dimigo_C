#include <stdio.h>
#include <math.h>
int main()
{
	double a, b, c;
	scanf("%lf %lf", &a, &b);
	c = pow(2, b);
	printf("%.0lf", a*c);
	return 0;
}
