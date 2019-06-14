#include <stdio.h>
int main() {
	int a, b, i, cnt=0;
	scanf("%d %d", &a, &b);
	for(i=1;i<=1000;i++)
	{
		if(i%a == 0 && i%b == 0)
			cnt++;
	}
	printf("%d", cnt);
	return 0;
}
