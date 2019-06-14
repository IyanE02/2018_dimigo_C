#include <stdio.h>

struct st
{
	char name[30];
	int score;
};

int main()
{
	int a, i;
	int max = -1, maxw=0;
	scanf("%d", &a);
	struct st n[a];
	
	for(i=0;i<a;i++)
	{
		scanf("%s %d", n[i].name, &n[i].score);
		if(max < n[i].score)
		{
			max = n[i].score;
			maxw = i;
		}
	}
	
	printf("%s", n[maxw].name);
	
	return 0;
}