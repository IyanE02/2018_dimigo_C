#include <stdio.h>

void
I(int a)
{
	for(int i=0;i<a;i++)
	{
		if(i == 0 || i == a-1)
			printf("***");
		else
			printf(" *");
		if(i == a-1) break;
		printf("\n");
	}
}

void
main()
{
	int a;
	scanf("%d", &a);
	I(a);
}