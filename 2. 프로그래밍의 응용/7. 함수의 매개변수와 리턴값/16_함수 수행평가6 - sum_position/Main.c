#include <stdio.h>

void
SP(int a)
{
	int cnt=0;
	
	for(;;)
	{
		cnt += a % 10;
		a /= 10;
		if(a==0) break;
	}
	
	printf("%d", cnt);
}

void
main()
{
	int a;
	scanf("%d", &a);
	
	SP(a);
}