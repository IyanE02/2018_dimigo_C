#include <stdio.h>
int main()
{
	double a;
	scanf("%lf", &a);
	if(a>=80&&a<=120)
		printf("원 안에 들어왔습니다.");
	else
		printf("원을 벗어났습니다.");
	return 0;
}
