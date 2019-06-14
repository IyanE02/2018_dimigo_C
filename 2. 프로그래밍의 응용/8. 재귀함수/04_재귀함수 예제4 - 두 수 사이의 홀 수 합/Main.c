#include <stdio.h>

int sums (int b, int sum, int i)
{
	if(i > b) return sum;
	else
	{
		if(i % 2 == 1)
		{
			sum += i;
		}
		i++;
		sums(b, sum, i);
	}
}

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", sums(b, 0, a));
	return 0;
}