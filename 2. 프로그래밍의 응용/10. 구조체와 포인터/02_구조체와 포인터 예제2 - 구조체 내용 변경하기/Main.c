#include <stdio.h>

typedef struct hero
{
	char job[20];
	char weapon[20];
	int hp;
	int run;
}hero;

void run(hero *a)
{
	int i;
	for(i=0;i<a->run;i++)
	{
		a->hp -= 10;
	}
}

int main()
{
	hero n;
	scanf("%s %s %d %d", n.job, n.weapon, &n.hp, &n.run);
	run(&n);
	printf("%d", n.hp);
	return 0;
}