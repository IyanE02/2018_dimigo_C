#include <stdio.h>
int main() {
	int a, i, j, cnt=1;
	scanf("%d", &a);
	for(i = 0; i < a; i++)
	{
		for(j = 0; j <= i; j++)
			printf("%3d", cnt++);
		printf("\n");
	}
	return 0;
}
