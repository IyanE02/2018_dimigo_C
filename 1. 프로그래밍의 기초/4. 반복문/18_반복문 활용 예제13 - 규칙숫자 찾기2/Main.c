#include <stdio.h>
int main() {
	int a=3, n, sum=0;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		sum += a;
		a = a*2+3;
	}
	printf("%d", sum);
	return 0;
}
