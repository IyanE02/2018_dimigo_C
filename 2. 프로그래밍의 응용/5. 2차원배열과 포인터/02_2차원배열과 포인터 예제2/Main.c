#include <stdio.h>
int main() {
	int arr[4][4];
	int *p=arr;
	int i,j,sum=0;
	for(i=0;i<4;i++)
		for(j=0;j<4;j++)
			scanf("%d",p+i*4+j);
	for(i=0;i<4;i++)
		sum+=*(p+i*4+i);	
	printf("%d",sum);
	return 0;
}
