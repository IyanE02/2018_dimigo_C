#include <stdio.h>
int main() {
	int n, arr[10000], cnt=0;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
		scanf("%d", &arr[i]);
	for(int i=0;i<n-1;i++)
	{
		printf("%d ", arr[i+1] - arr[i]);
		cnt += arr[i+1] - arr[i];
	}
	printf("\n%d", cnt);
	return 0;
}
