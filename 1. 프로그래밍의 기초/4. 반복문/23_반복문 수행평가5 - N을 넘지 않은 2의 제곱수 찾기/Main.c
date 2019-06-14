#include <stdio.h>
int main() {
	int n, i, a = 2;
	scanf("%d", &n);
	for (i = 1;;)
	{
		if (n <= a)
			break;
		a *= 2;
		i++;
	}
	printf("%d", i-1);
	return 0;
}
