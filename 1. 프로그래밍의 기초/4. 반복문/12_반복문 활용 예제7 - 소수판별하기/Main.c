#include <stdio.h>
int main()
{
	int a, i=2, cnt=0;;
	scanf("%d", &a);
	while(i<a)
	{
		if(a % i == 0) cnt++;
		i++;
	}
	
	if (cnt == 0) printf("소수이다.");
	else printf("소수가 아니다.");
	
	return 0;
}
