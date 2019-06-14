#include <stdio.h>

int sums (int b, int sum, int i)
{
	if(i > b) return sum;
	else
	{
		if(i % 2 == 0)
		{
			sum++;
		}
		i++;
		sums(b, sum, i);
	}
}

int main()
{
	int a, b;
	scanf("%d", &a);
	printf("%d", sums(a, 0, 0)-1);
	return 0;
}