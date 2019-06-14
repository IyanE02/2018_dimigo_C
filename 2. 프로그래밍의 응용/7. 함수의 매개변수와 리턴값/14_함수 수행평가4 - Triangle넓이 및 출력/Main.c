#include <stdio.h>

void
size(int a)
{
	double b = (double)a * (double)a * 0.5;
	printf("%.2lf\n", b);
}

void
print(int a)
{
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<i+1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

void
main()
{
	int a;
	scanf("%d", &a);
	size(a);
	print(a);
}