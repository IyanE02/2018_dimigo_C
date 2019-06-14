#include <stdio.h>

int main()
{
	int a, b, c, d, e, f, n, max;
	for (int i = 100; i < 1000; i++)
		for (int j = 100; j < 1000; j++)
		{
			n = i * j;
			a = (n / 100000);
			b = (n / 10000) % 10;
			c = (n / 1000) % 10;
			d = (n / 100) % 10;
			e = (n / 10) % 10;
			f = n % 10;
			if ((a == f && b == e) && (c == d && max < n))
				max = n;
		}
	printf("%d", max);
	return 0;
}