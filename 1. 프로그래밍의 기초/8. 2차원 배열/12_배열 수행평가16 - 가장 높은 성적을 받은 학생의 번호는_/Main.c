#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int m, n = 3, i, j;
	double arr[1000][4] = { 0, };
	scanf("%d", &m);
	for (i = 0; i<m; i++)
	{
		for (j = 0; j<n; j++)
		{
			scanf("%lf", &arr[i][j]);
			arr[i][n] += arr[i][j];
			arr[m][j] += arr[i][j];
		}
	}

	for (i = 0; i<m; i++)
		arr[i][3] /= 3;
	for (i = 0; i<3; i++)
		arr[m][i] /= m;

	for (i = 0; i <= m; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (i == m && j == n) break;
			printf("%5.1lf ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}