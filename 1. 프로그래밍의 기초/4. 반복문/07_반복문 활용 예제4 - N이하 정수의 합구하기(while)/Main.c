#include <stdio.h>
int main() {
	int a, n=0, i=0;
	scanf("%d", &a);
	while(i <= a)
	{
		n += i;
		i++;	
	}
	printf("%d", n);
	return 0;
}
