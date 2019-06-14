#include <stdio.h>

void
ES(int a)
{
	int cnt=0;
	for(int i=2;i<=a;i+=2)
		cnt += i;
	printf("%d", cnt);
}

void
main()
{
	int a;
	scanf("%d", &a);
	ES(a);
}