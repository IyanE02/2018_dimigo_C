#include <stdio.h>

int max(int n,int *a)
{
	int i, m = a[0];
	for(i = 1; i<n;i++)
	{
		if(m < a[i]) m = a[i];
	}
	return m;
}

int main()
{
	int n, arr[100];
	scanf("%d", &n);
	for(int i=0;i<n;i++)
		scanf("%d", &arr[i]);
	printf("%d",max(n, arr));
	return 0;
}