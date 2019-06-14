#include <stdio.h>
int main() {
	int i=1, a;
	
	scanf("%d", &a);
	
	for(i=1;a * i<=100;i++)
	{
		printf("%d\n", a * i);	
	}
	
	return 0;
}
