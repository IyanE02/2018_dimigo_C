#include <stdio.h>
int main() {
	int arr[3][3];
	int (*p)[3]=arr;
	int i,j;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf("%d",&p[i][j]);
	for(i=0;i<3;i++)
		printf("%d\n",p[i][0]);	
	return 0;
}
