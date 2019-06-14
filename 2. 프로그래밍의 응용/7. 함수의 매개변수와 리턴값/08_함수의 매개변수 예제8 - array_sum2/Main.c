#include <stdio.h>

void sumasd(int a, int (*arr)[4], int *sum)
{
	if(a == 0)
	{
		for(int i=0;i<4;i++)
		{
			for(int j=0;j<4;j++)
			{
				sum[i] += arr[j][i];
			}
		}
	}
	if(a == 1)
	{
		for(int i=0;i<4;i++)
		{
			for(int j=0;j<4;j++)
			{
				sum[i] += arr[i][j];
			}
		}
	}
}

int main()
{
	int arr[4][4], n, sum[4]={0,};
	for(int i=0;i<4;i++)
		for(int j=0;j<4;j++)
			scanf("%d", &arr[i][j]);
	scanf("%d", &n);
	
	sumasd(n, arr, sum);
	
	for(int i=0;i<4;i++)
	{
		printf("%d ", sum[i]);
	}
}
