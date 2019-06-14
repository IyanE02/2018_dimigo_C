#include <stdio.h>
int main() {
	int a, i=1;
	scanf("%d", &a);
	while(i<=9)
	{
		printf("%d * %d = %d\n", a, i, a*i);
		i++;
	}
	return 0;
}
