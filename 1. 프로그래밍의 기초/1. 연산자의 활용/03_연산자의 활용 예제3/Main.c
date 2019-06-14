#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define D 1071
#define S 10.71
int main()
{
	int d = 0, s = 0;
	int input;
	scanf("%d", &input);
	d = input / D;
	s = (input % D) / S;
	printf("%d달러 %d센트\n", d, s);
	return 0;
}