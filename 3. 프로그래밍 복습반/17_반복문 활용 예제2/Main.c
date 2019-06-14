#include <stdio.h>
int main() {
	int a, sum = 0, i;
	scanf("%d", &a);
	for (i = a; i <= 100; i += a)
		sum += i;
	printf("%d", sum);
	return 0;
}
