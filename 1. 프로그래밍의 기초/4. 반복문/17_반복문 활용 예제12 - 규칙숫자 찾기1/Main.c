#include <stdio.h>

int main()
{
	int a=1, n;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		a += 4;
	}
	printf("%d", a-4);
	return 0;
}