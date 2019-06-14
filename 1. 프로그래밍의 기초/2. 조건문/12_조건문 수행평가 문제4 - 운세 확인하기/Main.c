#include <stdio.h>
int main()
{
	int a, b, c, d;
	
	scanf("%d.%d.%d %d", &a, &b, &c, &d);
	
	int sum = (a+b+c+d);
	sum = sum % 100 - sum % 10;
	
	
	if(sum%3==0)
		printf("대박나는 해");
	if(sum%3==1)
		printf("무난한 해");
	if(sum%3==2)
		printf("운이 안좋은 해");
	
	return 0;
}
