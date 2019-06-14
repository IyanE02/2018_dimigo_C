#include <stdio.h>

void 
CBN(int arr[100], int n, int a)
{
	int cnt=0;
	for(int i=0;i<n;i++)
		if(arr[i] > a) cnt++;

	printf("%d", cnt);
}

int
main()
{
	int arr[100], n, a;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
		scanf("%d", &arr[i]);
	scanf("%d", &a);
	CBN(arr, n, a);
}