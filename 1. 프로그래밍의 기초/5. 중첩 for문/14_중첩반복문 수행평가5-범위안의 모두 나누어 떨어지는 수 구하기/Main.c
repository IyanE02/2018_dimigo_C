#include <stdio.h>
int main()
{
	int i, j, n, cnt=0;;
	scanf("%d", &n);
	for(i=1;;i++)
	{
		cnt=0;
		for(j=1;j<=n;j++)
		{
			if(i % j == 0) cnt++;
		}
		if(cnt == n)
		{
			printf("%d", i);
			return 0;
		}
	}
}
