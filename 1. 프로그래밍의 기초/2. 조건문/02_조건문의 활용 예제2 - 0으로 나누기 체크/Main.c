#include <stdio.h>
int main()
{
	double a, b;
	scanf("%lf %lf", &a, &b);
	if(b == 0)
		printf("나누기 연산을 할 수 없습니다.");
	else
		printf("%.3lf", a / b);
	return 0;
}
