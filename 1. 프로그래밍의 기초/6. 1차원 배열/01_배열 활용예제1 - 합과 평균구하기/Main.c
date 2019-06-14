#include <stdio.h>
int main()
{
	int a[7];
	double sum=0;
	for(int i=0;i<7;i++)
	{
		scanf("%d", &a[i]);
		sum += a[i];
	}
	printf("%.0lf\n%.2lf", sum, sum/7);
	return 0;
}