#include <stdio.h>
int main()
{
	double a, b;
	char c;
	
	scanf("%lf%c%lf", &a, &c, &b);
	
	if(c == '+')
		printf("%.2lf", a+b);
	else if(c == '-')
		printf("%.2lf", a-b);
	else if(c == '/')
		printf("%.2lf", a/b);
	else if(c == '*')
		printf("%.2lf", a*b);
	else
		printf("잘못된 연산자입니다.");

	return 0;
}