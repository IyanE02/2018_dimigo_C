#include <stdio.h>

int divisor(int x)
{
	int i, cnt=0;
	for(i=1;i<=x;i++)
		if(x % i == 0) cnt++;
	
	return cnt;
}

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	if(divisor(a) > divisor(b))
		printf("%d", a);
	else if(divisor(a) < divisor(b))
		printf("%d", b);
	else
		printf("%d %d", a, b);
	return 0;
}