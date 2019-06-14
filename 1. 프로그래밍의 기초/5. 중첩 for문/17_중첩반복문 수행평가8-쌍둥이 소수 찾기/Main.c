#include <stdio.h>

int sosu(int num)
{
	int cnt = 0;
	for (int i = 2; i < num; i++)
		if (num % i == 0) cnt++;

	if (cnt == 0) return 1;
	return 0;
}

int main()
{
	int n;
	int arr[1000000];
	int cnt = 0;
	
	scanf("%d", &n);
	
	for(int i=2;i<=n;i++)
		arr[i] = sosu(i);
	
	for(int i=2;i<=n-2;i++)
		if(arr[i] == 1 && arr[i+2] == 1) cnt++;
	
	printf("%d", cnt);
}