#include <stdio.h>
int main()
{
	int n, i, j, num=0;
	scanf("%d", &n);
	for(i=1;i<=6;i++)
	{
		for(j=1;j<=6;j++)
		{
			if(i + j >= n)
				num++;
		}
	}
	printf("%d", num);
	return 0;
}
