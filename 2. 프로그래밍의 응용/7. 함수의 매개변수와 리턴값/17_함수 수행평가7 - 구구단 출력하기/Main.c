#include <stdio.h>

void
GU(int a)
{
	for(int i=1;i<=10;i++)
		printf("%d * %d = %d\n", a, i, a*i);
}

void
main()
{
	int a;
	scanf("%d", &a);
	GU(a);
}