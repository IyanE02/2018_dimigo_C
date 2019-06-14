#include <stdio.h>
int main() {
	int n,m,i,j;
	scanf("%d %d",&m,&n);
	m-=2;
	n-=2;
	printf("+");
	for(i=0;i<m;i++)
		printf("-");
	printf("+\n");
	
	for(i=0;i<n;i++)
	{
		printf("|");
		for(j=0;j<m;j++)
			printf(" ");
		printf("|\n");
	}
	
	printf("+");
	for(i=0;i<m;i++)
		printf("-");
	printf("+\n");
	return 0;
}
