#include <stdio.h>
int main()
{
	int arr[10001], cnt[10] = { 0, }, n;
	scanf("%d", &n);
	for (int i = 0; i<n; i++)
	{
		scanf("%d", &arr[i]);
		cnt[arr[i]]++;
	}
	for (int i = 0; i<10; i++)
	{
		printf("%d ", cnt[i]);
	}
	return 0;
}