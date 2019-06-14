#include <stdio.h>
int main() {
	int arr[10];
	int n, i;
	scanf("%d", &n);
	for(i=0;i<10;i++)
	{
		arr[i] = n * (i + 1);
		printf("%d ", arr[i]);
	}
	return 0;
}
