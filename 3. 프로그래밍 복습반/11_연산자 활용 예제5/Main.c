#include <stdio.h>
int main()
{
	double a;
	scanf("%lf", &a);
	int b = a*100;
	printf("%d", b % 10);
	return 0;
}
