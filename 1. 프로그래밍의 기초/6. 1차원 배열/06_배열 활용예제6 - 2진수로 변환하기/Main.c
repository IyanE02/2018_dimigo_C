#include <stdio.h>
int main()
{
	int i, cnt = 0, n, k[101];
	
	scanf("%d", &n);
	
	for (i = 0; n != 0; i++)
	{
		cnt++;
		k[i] = n % 2;
		n = n / 2;
	}
	
	for(i = cnt - 1; i >= 0; i--)
	{
		printf("%d", k[i]);
	}
	
	return 0;
}