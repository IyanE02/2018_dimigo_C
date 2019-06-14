#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int arr[10], cnt[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1 }, i, n = 10;
	for (i = 0; i<10; i++)
	{
		scanf("%d", &arr[i]);
		cnt[arr[i]]++;
	}

	for (i = 9; i != -1; i--)
	{
		if (cnt[i] > cnt[n]) n = i;
	}

	printf("%d", n);
	return 0;
}
