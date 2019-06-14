#include <stdio.h>
int main() {
	int a=0, sum=0;
	while(a>=0)
	{
		scanf("%d", &a);
		sum += a;
	}
	sum -= a;
	printf("%d", sum);
	return 0;
}
