#include <stdio.h>

int max(int a, int b)
{
	if(a > b) return a;
	else return b;
}

int main()
{
	int x, y, z;
	scanf("%d %d %d", &x, &y, &z);
	printf("%d", max(z, max(x, y)));
	return 0;
}