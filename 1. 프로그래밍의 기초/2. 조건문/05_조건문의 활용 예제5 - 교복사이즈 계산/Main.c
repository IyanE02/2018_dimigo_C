#include <stdio.h>
int main()
{
	double a;
	scanf("%lf", &a);
	if (150 <= a && a < 160)
		printf("S");
	else if (160 <= a && a < 170)
		printf("M");
	else if (170 <= a && a < 180)
		printf("L");
	else if (180 <= a)
		printf("XL");
	else
		printf("맞는 교복이 없습니다.");
	return 0;
}