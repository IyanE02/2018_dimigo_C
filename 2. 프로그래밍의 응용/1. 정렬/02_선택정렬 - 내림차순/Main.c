#include <stdio.h>
int main()
{
	int i, j, tmp, arr[100], n;
	scanf("%d", &n);
	for(i=0;i<n;i++)
		scanf("%d", &arr[i]);
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if(arr[i] <= arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
	for(i=0;i<n;i++)
		printf("%d ", arr[i]);
	return 0;
}