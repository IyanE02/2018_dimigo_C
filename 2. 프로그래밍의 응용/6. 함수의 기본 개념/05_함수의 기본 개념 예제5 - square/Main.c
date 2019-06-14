#include <stdio.h>
int square(int n, int m)
{
	int a=n;
	for(int i=1;i<m;i++)
		a *= n;
		return a;
}

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d %d",square(a, b), square(b, a));
	return 0;
}
