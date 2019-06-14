#include <stdio.h>

void swap(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

void divide(int a, int b, int *n, int *m)
{
	*n = a / b;
	*m = a % b;
}

int main()
{
	int a, b, n=0, m=0;
	scanf("%d %d", &a, &b);
	
	if (b > a)
		swap(&a, &b);
	
	divide(a, b, &n, &m);
	
	printf("%d %d", n, m);
	
	return 0;
}