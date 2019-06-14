#include <stdio.h>
int main()
{
	int n, arr[25][3];
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d %d", &arr[i][0], &arr[i][1]);
		arr[i][2] = arr[i][0] + arr[i][1];
	}
	for(int i=0;i<n;i++)
	{
		printf("%d %d ",arr[i][0], arr[i][1]);
		if(arr[i][2] >= 90) printf("A\n");
		else if(arr[i][2] >= 80 && arr[i][2] < 90) printf("B\n");
		else printf("C\n");
	}
	return 0;
}