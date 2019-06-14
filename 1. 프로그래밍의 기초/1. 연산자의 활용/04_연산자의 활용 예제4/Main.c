#include <stdio.h>
int main() {
	int a, b, c;
	char d, e;
	scanf("%d%c%d%c%d", &a, &d, &b, &e, &c);
	printf("%04d년 %02d월 %02d일\n", a, b, c);
	return 0;
}
	