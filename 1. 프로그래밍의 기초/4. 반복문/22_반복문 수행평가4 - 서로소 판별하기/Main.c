#include <stdio.h>
int main()
{
	int a, b, i, cnt=0;
	scanf("%d %d", &a, &b);
	for(i=1;i<=b;i++)
		if(a%i==0&&b%i==0)
			cnt++;
	if(cnt==1)
		printf("서로소");
	else
		printf("서로소가 아니다.");
	return 0;
}