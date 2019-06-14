#include <stdio.h>
int main()
{
	int arr[1000][1000];
	int m, n, i, j, cnt=1;
	scanf("%d %d", &m, &n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			printf("%3d ", cnt++);
		printf("\n");
	}
	return 0;
}