#include <stdio.h>

struct st
{
	int num;
	char name[30];
	int a[10];
	double avg;
};

int main()
{
	int a, i, j, maxn, minn;
	double max = -1, min = 101;

	scanf("%d", &a);
	
	struct st n[a];
	
	for(i=0;i<a;i++)
	{
		n[i].avg = 0;
		scanf("%d %s", &n[i].num, n[i].name);
		for(j=0;j<10;j++)
		{
			scanf("%d", &n[i].a[j]);
			n[i].avg += (double)n[i].a[j];
		}
		n[i].avg /= 10;
	}
	
	for(i=0;i<a;i++)
	{
		if(n[i].avg > max)
		{
			max = n[i].avg;
			maxn = i;
		}
		if(n[i].avg < min)
		{
			min = n[i].avg;
			minn = i;
		}
	}
	
	printf("%d %s\n%d %s", n[maxn].num, n[maxn].name, n[minn].num, n[minn].name);
	
	return 0;
}