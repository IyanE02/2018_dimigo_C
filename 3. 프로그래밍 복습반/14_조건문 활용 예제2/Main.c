#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	if(1<=a&& 1000>=a)
		printf("범위안에 있다.");
	else
		printf("범위를 벗어난다.");
	return 0;
}