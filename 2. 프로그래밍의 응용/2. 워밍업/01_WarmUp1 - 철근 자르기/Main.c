#include <stdio.h>

int n, k, cnt, m;

void input()
{
	scanf("%d %d", &n, &k);
}

void calc()
{
	cnt = n / k;
	if(cnt > 9999)
		m = 1;
	else m = 0;
}

void output()
{
	int i;
	if(m == 0)
		for(i=1;i<=cnt;i++)
			printf("F-%04d\n", i);
	else printf("번호초과오류");
}

int main()
{
	input();
	if(n < k)
	{
		printf("자를길이오류");
		return 0;
	}
	calc();
	output();
	return 0;
}