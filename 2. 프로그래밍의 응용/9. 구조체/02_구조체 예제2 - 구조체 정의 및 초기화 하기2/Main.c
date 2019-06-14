#include <stdio.h>

struct st
{
	char a[30];
	int b;
	char c[30];
};

int main()
{
	struct st n;
	scanf("%s %d %s", &n.a, &n.b, &n.c);
	printf("음식이름 : %s\n음식칼로리 : %dCal\n음식종류 : %s", n.a, n.b, n.c);
	return 0;
}