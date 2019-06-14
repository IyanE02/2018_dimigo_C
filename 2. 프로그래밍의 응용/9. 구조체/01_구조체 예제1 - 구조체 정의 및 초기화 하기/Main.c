#include <stdio.h>

struct st
{
	int a;
	char b[30];
	char c[30];
};

int main()
{
	struct st n = {1111,"kim","e-business"};
	printf("%d %s %s", n.a, n.b, n.c);
	return 0;
}