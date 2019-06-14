#include <stdio.h>

void r(int cnt)
{
	int i, j;
	for(i=0;i<cnt;i++)
	{
		for(j=0;j<cnt;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

void t(int cnt)
{
		int i, j;
	for(i=0;i<cnt;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

int main()
{
	char a;
	int num;
	scanf("%c %d", &a, &num);
	if(a == 'r') r(num);
	else t(num);
	return 0;
}