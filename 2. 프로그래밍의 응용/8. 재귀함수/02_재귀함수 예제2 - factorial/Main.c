#include <stdio.h>

void fact(int n, int mul)
{
	if(n == 1) printf("%d", mul);
	else { mul *= n; fact(n-1, mul); }
}

int main()
{
	int n;
	scanf("%d", &n);
	fact(n, 1);
	return 0;
}