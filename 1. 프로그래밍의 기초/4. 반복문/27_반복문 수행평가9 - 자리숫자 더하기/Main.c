#include <stdio.h>
int main()
{
	int n, i, sum = 0;
	scanf("%d", &n);
	for (i = 10; i <= 10000000; i *= 10)
	{
		sum += ((n % i) - (n % (i / 10))) / (i / 10);
	}
	printf("%d", sum);
	return 0;
}