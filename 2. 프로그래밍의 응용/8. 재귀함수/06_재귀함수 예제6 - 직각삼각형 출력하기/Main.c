#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void line(int a, int no)
{
	if (a == 0) return;
	else
	{
		for(int i=0;i<no-a+1;i++) printf("*");
		printf("\n");
		line(a - 1, no);
	}
}

int main()
{
	int a;
	scanf("%d", &a);
	line(a, a);
	return 0;
}
