#include <stdio.h>
int main() {
	int *arr1,*arr2,*arrsum;
	int i,j,k,n1,n2;
	
	scanf("%d",&n1);
	arr1=malloc(sizeof(int)*(n1+1));
	for (i=0;i<n1;i++)
		scanf("%d",arr1+i);
	*(arr1+i)=NULL;
	
	scanf("%d",&n2);
	arr2=malloc(sizeof(int)*(n2+1));
	for (i=0;i<n2;i++)
		scanf("%d",arr2+i);
	*(arr2+i)=NULL;

	arrsum=malloc(sizeof(int)*(n1+n2+1));
	for(i=0,j=0,k=0;i<n1+n2;)
	{
		if(*(arr1+j))
			*(arrsum+i++)=*(arr1+j++);
		if(*(arr2+k))
			*(arrsum+i++)=*(arr2+k++);
	}
	
	for(i=0;i<n1+n2;i++)
		printf("%d ",*(arrsum+i));
	
	free(arr1);
	free(arr2);
	free(arrsum);
	return 0;
}
