#include <stdio.h>
int sum(int a, int b, int c)
{
	a += b;
	a += c;
	return a;
}

int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	
	printf("%d", sum(a, b, c));
	return 0;
}