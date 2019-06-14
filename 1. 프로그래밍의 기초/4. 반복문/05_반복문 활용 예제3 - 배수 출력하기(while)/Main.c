#include <stdio.h>
int main() {
	int i=1, a;
	
	scanf("%d", &a);
	
	while(a * i<=100)
	{
		printf("%d\n", a * i++);	
	}
	
	return 0;
}
