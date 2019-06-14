#include <stdio.h>
int main()
{
	int a;
	
	scanf("%x", &a);
	
	a ^= 0xFFFF;
	
	printf("0x%04x", a);
	
	return 0;
}
