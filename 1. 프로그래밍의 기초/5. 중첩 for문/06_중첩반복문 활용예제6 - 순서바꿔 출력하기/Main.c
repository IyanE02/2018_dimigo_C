#include <stdio.h>
int main()
{
	int n, i, j, line = 0, k = 0;
	scanf("%d", &n);
	k -= n-1;
	for (i = 0; i < n; i++)
	{
		if (line % 2 == 0)
			k += n-1;
		else
			k += n+1;
		for (j = 0; j < n; j++)
		{
			if (line % 2 == 0)
			{
				k++;
				printf("%2d ", k);
			}
			else {
				k--;
				printf("%2d ", k);
			}
		}
		printf("\n");
		line++;
	}
	return 0;
}
