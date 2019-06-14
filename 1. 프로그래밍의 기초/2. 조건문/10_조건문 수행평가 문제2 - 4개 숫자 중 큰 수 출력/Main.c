#include <stdio.h>
int main()
{
	int a, b = -1234567;
	
	scanf("%d", &a);
	if(b < a) b = a;
	
	scanf("%d", &a);
	if(b < a) b = a;
	
	scanf("%d", &a);
	if(b < a) b = a;
	
	scanf("%d", &a);
	if(b < a) b = a;
	
	printf("%d", b);
	
	return 0;
}
