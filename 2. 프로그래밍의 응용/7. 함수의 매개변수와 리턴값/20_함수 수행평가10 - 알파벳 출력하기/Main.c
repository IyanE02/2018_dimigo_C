#include <stdio.h>

void
A(char a, char b)
{
	printf("%c", a);
	for(int i=1;a+i!=b+1;i++)
	{
		printf(" %c", a+i);
	}
}

void
main()
{
	char a, b;
	scanf("%c %c", &a, &b);
	A(a, b);
}