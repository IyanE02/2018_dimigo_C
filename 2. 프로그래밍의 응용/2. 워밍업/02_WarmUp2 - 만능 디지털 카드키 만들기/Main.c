#include <stdio.h>

int v1, v2, v3, i, sol;

void input()
{
	scanf("%d %d %d", &v1, &v2, &v3);
}

void calc()
{
	for(i=1;i<=v1;i++)
		if((v1%i==0 && v2%i==0) && v3%i==0)
			sol = i;
}

void output()
{
	printf("%d", sol);
}

int main()
{
	input();
	calc();
	output();
	return 0;
}