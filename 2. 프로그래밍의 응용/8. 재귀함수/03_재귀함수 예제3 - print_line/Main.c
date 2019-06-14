#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void line(int a)
{
	if (a == 0) return;
	else
	{
		line(a - 1);
		printf("*****\n");
	}
}

int main()
{
	int a;
	scanf("%d", &a);
	line(a);
	return 0;
}
