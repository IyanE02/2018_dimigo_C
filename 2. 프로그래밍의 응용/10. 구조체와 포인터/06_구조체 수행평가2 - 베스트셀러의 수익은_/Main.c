#include <stdio.h>

typedef struct Top5
{
	char name[300];
	int pri;
	int cnt;
	int alpri;
}book;

int main()
{
	int max = -1, maxn;
	book b[5];
	for(int i=0;i<5;i++)
	{
		scanf("%s %d %d", b[i].name, &b[i].pri, &b[i].cnt);
		b[i].alpri = b[i].pri * b[i].cnt;
		if(b[i].alpri > max)
		{
			maxn = i;
			max = b[i].alpri;
		}
	}
	printf("%s", b[maxn].name);
	return 0;
}