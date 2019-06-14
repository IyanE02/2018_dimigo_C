#include <stdio.h>
int main() {
	int *arr;
	int i,n;
	scanf("%d",&n);
	arr=malloc(sizeof(int)*n);
	for (i=0;i<n;i++)
		scanf("%d",arr++);
	for (i=0;i<n;i++)
		printf("%d ",*--arr);
	free(arr);
	return 0;
}
