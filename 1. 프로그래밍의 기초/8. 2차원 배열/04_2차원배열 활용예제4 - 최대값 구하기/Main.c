#include <stdio.h>
int main()
{
	int m, n, arr[100][100] = {0,}, i, j;
	scanf("%d %d", &m, &n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d", &arr[i][j]);
			if(arr[i][n] < arr[i][j]) arr[i][n] = arr[i][j];
			if(arr[m][j] < arr[i][j]) arr[m][j] = arr[i][j];
			if(i==j && arr[m][n] < arr[i][j]) arr[m][n] = arr[i][j];
		}
	}
	for(i=0;i<=m;i++)
	{
		for(j=0;j<=n;j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}