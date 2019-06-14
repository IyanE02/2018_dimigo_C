#include <stdio.h>
void main()
{
	int a, b, c, st = 0, ba = 0;
	scanf("%d %d %d", &a, &b, &c);
	if (a == 1) st++; if (b == 2) st++; if (c == 3) st++;
	if (b == 1 || c == 1) ba++; if (a == 2 || c == 2) ba++; if (a == 3 || b == 3) ba++;
	printf("%dStrike %dBall", st, ba);
}