#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void inputScore(int n);

int main()
{
	int n, i, j;
	scanf("%d", &n);

	inputScore(n);

	return 0;
}

void inputScore(int n)
{
	double score[21][4];
	int i, j;
	
	for ( i = 0; i < 21; i++)
		for ( j = 0; j < 4; j++)
			score[i][j] = 0;

	for ( i = 0; i < n; i++)
		for ( j = 0; j < 3; j++)
		{
			scanf("%lf", &score[i][j]);
			score[i][3] += score[i][j];
			score[n][j] += score[i][j];
		}

	for ( i = 0; i < n; i++)
		score[i][3] /= 3;

	for ( i = 0; i < 3; i++)
		score[n][i] /= n;

	for ( i = 0; i < n; i++)
	{
		for ( j = 0; j < 4; j++)
		{
			printf("%5.1lf ", score[i][j]);
		}
		printf("\n");
	}

	printf("%5.1lf %5.1lf %5.1lf ", score[n][0], score[n][1], score[n][2]);

	return;
}