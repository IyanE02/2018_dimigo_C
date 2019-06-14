#include <stdio.h>
int main() {
	int *arr;
	int i,n;
	scanf("%d",&n);
	arr=malloc(sizeof(int)*n);
	for (i=0;i<n;i++)
		scanf("%d",arr+i);
	for (i=0;i<n/2;i++)
	{
		printf("%d %d ",*(arr+i),*(arr-i+n-1));
	}
	if(n%2)
		printf("%d ",*(arr+i));
	free(arr);
	return 0;
}
