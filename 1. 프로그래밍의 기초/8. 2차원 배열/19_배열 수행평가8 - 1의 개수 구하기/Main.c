#include <stdio.h>
int main() {
	int m, arr[30][30]={0,}, i, j;
	scanf("%d", &m);
	for(i=0;i<m;i++)
		for(j=0;j<m;j++)
			scanf("%d", &arr[i][j]);

	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			if(arr[i][j] == 1) 
			{
				arr[i][m]++;
				arr[m][j]++;
			}
		}
	}
			
	for(i=0;i<=m;i++)
	{
		for(j=0;j<=m;j++)
		{
			if(i == m && j == m) return 0;
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
