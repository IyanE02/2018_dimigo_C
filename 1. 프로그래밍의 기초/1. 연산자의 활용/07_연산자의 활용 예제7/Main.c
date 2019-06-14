#include <stdio.h>
int main()
{
	int a;
	
	scanf("%x", &a);
	a |= 21845;
	printf("0x%x", a);
	return 0;
}
