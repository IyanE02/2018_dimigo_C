#include <stdio.h>
int main() {
	int a, n=0, i=0;
	scanf("%d", &a);
	for(i=0;i <= a;i++)
	{
		n += i;
	}
	printf("%d", n);
	return 0;
}
