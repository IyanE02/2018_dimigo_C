#include <stdio.h>
int main()
{
	int a, i, j, cnt;
	scanf("%d", &a);
	for (i = 2; i <= a / 2 + 1; i++)
	{

		if (a % i == 0)
		{
			cnt = 0;
			for (j = 2; j < i; j++)
			{
				if (i % j == 0) cnt++;
			}
			if (cnt == 0) printf("%d ", i);
		}
	}
	return 0;
}