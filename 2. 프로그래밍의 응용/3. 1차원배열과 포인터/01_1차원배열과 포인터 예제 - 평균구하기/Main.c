#include <stdio.h>
int main()
{
	int a, b[100];
	int *p = b;
	double c = 0;

	scanf("%d", &a);
	while (p - b < a)
	{
		scanf("%d", p);
		p++;
	}

	p -= a;

	while (p - b < a)
	{
		c += *(p);
		p++;
	}
	
	printf("%.2lf", c/a);
	
	return 0;
}