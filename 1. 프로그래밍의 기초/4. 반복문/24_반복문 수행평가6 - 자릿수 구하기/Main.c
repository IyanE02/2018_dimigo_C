#include <stdio.h>
int main() {
	int a, cnt=0;
	scanf("%d", &a);
	for(;;)
	{
		a /= 10;
		cnt++;
		if(a==0)
			break;
	}
	printf("%d", cnt);
	return 0;
}
