#include <stdio.h>
int main() {
	int a, sum = 0, i;
	scanf("%d", &a);
	for (i = a; i <= 1000; i += a)
		sum += i;
	printf("%d", sum);
	return 0;
}
