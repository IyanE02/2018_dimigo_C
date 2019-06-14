#include <stdio.h>
int sum(int n)
{
	int i, m=0;
	for(i=1; i<=n;i++)
	{
		m+=i;
	}
	return m;
}

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d",sum(a) + sum(b));
	return 0;
}
