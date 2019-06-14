#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int *xp, int *yp)
{
	int tmp = *xp;
	*xp = *yp;
	*yp = tmp;
}

void bubbleSort(int arr[], int n)
{
	if (n == 1)return;
	for (int i = 0; i < n - 1; i++)
		if (arr[i] > arr[i + 1])
			swap(&arr[i], &arr[i + 1]);
	bubbleSort(arr, n - 1);
}

void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main()
{
	int arr[100];
	int n;
	scanf("%d", &n);
	for(int i=0; i<n;i++)
		scanf("%d", &arr[i]);
	bubbleSort(arr, n);
	printArray(arr, n);
	return 0;
}