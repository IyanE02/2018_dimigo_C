#include <stdio.h>
int main()
{
	int i, j, n, arr[100], tmp;
	scanf("%d", &n);
	for(i=0;i<n;i++)
		scanf("%d", &arr[i]);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(arr[j] > arr[j+1])
			{
				tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
	for(i=0;i<n;i++)
		printf("%d ", arr[i]);
	return 0;
}
