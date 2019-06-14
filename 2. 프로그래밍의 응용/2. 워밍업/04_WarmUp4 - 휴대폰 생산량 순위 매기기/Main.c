#include <stdio.h>
int main() {
	int arr[2000];
	int n,i,j,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<n;i++)
	{
		k=1;
		for(j=0;j<n;j++)
		{
			if(arr[i]<arr[j])
				k++;
		}
		printf("%d\n",k);
	}
	return 0;
}
