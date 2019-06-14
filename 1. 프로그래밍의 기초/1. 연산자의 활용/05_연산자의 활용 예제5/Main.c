#include <stdio.h>

int main()
{
	int m, v;
	double e;
	
	scanf("%d %d", &m, &v);
	
	e = 0.5 * m * v * v;
	
	printf("%.2lf", e);
	
	return 0;	
}