#include <stdio.h>

void sums(int *a, int *sum)
{
	*sum += *a;
}

int main()
{
	int n, sum=0;
	int arr[100];
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		scanf("%d", &arr[i]);
		sums(&arr[i], &sum);
	}
	printf("%d", sum);
	return 0;
}
