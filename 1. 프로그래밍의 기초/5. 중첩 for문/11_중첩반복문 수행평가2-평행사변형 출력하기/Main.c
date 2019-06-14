#include <stdio.h>
int main()
{
	int i, j, n, m;
	scanf("%d %d", &m, &n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
			printf(" ");
		for(j=0;j<m;j++)
		{
			if((j==0 || j==m-1) || (i==0 || i==n-1))
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}