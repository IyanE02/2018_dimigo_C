#include <stdio.h>

struct st
{
	char name[30];
	int class;
	int num;
};

int main()
{
	int a, i;
	scanf("%d", &a);
	struct st n[a];
	for(i=0;i<a;i++)
		scanf("%s %d %d", &n[i].name, &n[i].class, &n[i].num);
	for(i=0;i<a;i++)
		printf("%s %d %d\n", n[i].name, n[i].class, n[i].num);
	return 0;
}