#include <stdio.h>

struct st
{
	char name[30];
	int age;
	char num[50];
};

int main()
{
	int a, i;
	scanf("%d", &a);
	struct st n[a];
	for(i=0;i<a;i++)
		scanf("%s %d %s", &n[i].name, &n[i].age, &n[i].num);
	for(i=0;i<a;i++)
		if(n[i].age>=20)
			printf("%s %d %s\n", n[i].name, n[i].age, n[i].num);

	return 0;
}