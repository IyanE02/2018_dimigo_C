#include <stdio.h>
int main()
{
	int a, b;
	int ye, mo, da;
	scanf("%d-%d", &a, &b);

	da = a % 100;
	mo = ((a - da) % 10000) / 100;
	ye = a / 10000;

	if (b < 3) ye += 1900;
	else ye += 2000;

	printf("생일 : %d년 %02d월 %02d일\n성별 : ", ye, mo, da);
	if (b == 1 || b == 3) printf("남자");
	else printf("여자");

	return 0;
}