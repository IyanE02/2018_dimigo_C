#include <stdio.h>

struct st
{
	char name[30];
	int a;
	int b;
};

int main()
{
	int a, i;
	scanf("%d", &a);
	struct st n[a];
	for(i=0;i<a;i++)
		scanf("%s %d-%d", &n[i].name, &n[i].a, &n[i].b);
	for(i=0;i<a;i++)
	{
		if((n[i].b / 1000000) % 2 == 1)
			printf("%s m\n", n[i].name);
		else
			printf("%s f\n", n[i].name);
	}
	return 0;
}